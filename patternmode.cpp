
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "API.h"
#include <QFileDialog>
#include <QFileInfo>
#include <QMessageBox>
#include <QTextStream>
#include <QCollator>
#include <QVector>
#include <QBitArray>
#include <QTime>
#include <QTimer>
#include <QThread>
#include <QProgressDialog>


/***************Helper Functions**************************/

/**
 * @brief MainWindow::updateSinglePatternMemory
 * Creates Splash images from all the Pattern elements
 * If it is Firmware update, adds the splash images to the firmware
 * If on the fly, converts the slpash images to splash blocks and updates on teh fly
 * @param totalSplashImages - I - total number of Splash images to be updated in Firmware
 * @param firmware - I - boolean to determine if it is to update firmware or On the Fly mode
 * @return
 */
int MainWindow::updateSinglePatternMemory(int totalSplashImages, BOOL firmware)
{
    for(int image = 0; image < totalSplashImages; image++)
    {
        int spalshImageCount;

        if(firmware)
        {
            spalshImageCount = image;
        }
        else
        {
            spalshImageCount = totalSplashImages - 1 - image;
        }

        PtnImage merge_image(m_ptnWidth, m_ptnHeight, 24);

        merge_image.fill(0);

        for(int i = 0; i < Auto_m_elements.size(); i++)
        {
            if(Auto_m_elements[i].splashImageIndex != spalshImageCount)
                continue;
            int bitpos = Auto_m_elements[i].splashImageBitPos;
            int bitdepth = Auto_m_elements[i].bits;
            PtnImage image(Auto_m_elements[i].name);
            merge_image.merge(image,bitpos,bitdepth);
        }

        merge_image.swapColors(PTN_COLOR_RED, PTN_COLOR_BLUE, PTN_COLOR_GREEN);
        uint08* splash_block = NULL;

        PtnImage merge_image_master(m_ptnWidth, m_ptnHeight, 24);
        PtnImage merge_image_slave(m_ptnWidth, m_ptnHeight, 24);
        merge_image_master = merge_image;
        merge_image_slave = merge_image;
        if (m_dualAsic)
        {

            merge_image_master.crop(0, 0, m_ptnWidth/2, m_ptnHeight);
            merge_image_slave.crop(m_ptnWidth/2, 0, m_ptnWidth/2, m_ptnHeight);

            uint08* splash_block_master = NULL;
            uint08* splash_block_slave = NULL;

            int splashSizeMaster  = merge_image_master.toSplash(&splash_block_master);
            int splashSizeSlave = merge_image_slave.toSplash(&splash_block_slave);

            if(splashSizeMaster <= 0 || splashSizeSlave <= 0)
                return -1;

            if(uploadPatternToEVM(true, spalshImageCount, splashSizeMaster, splash_block_master) == -1)
                return -1;

            if(uploadPatternToEVM(false, spalshImageCount, splashSizeSlave, splash_block_slave) == -1)
                return -1;
        }
        else
        {
           int splashSize = merge_image.toSplash(&splash_block);
           if(splashSize <= 0)
               return -1;
           if(uploadPatternToEVM(true, spalshImageCount, splashSize, splash_block) < 0)
               return -1;
        }
    }

    return 0;
}


/**
 * @brief MainWindow::UpdateLUTOnTheFly
 * Updates the Pattern images into the Splash block on the Firmware image in the EVM on the fly
 * @param master - I - boolean to indicate if it is madetr or slave
 * @param splashImageCount - I - the Index of the Splash Image to be updated
 * @param splash_size - I - size of the splash image that is being updated
 * @param splash_block - I - the updated splash block
 * @return
 */
int MainWindow::uploadPatternToEVM(bool master, int splashImageCount, int splash_size, uint08* splash_block)
{
    int origSize = splash_size;

    LCR_InitPatternMemLoad(master, splashImageCount, splash_size);

    //QProgressDialog imgDataDownload("Image data download", "Abort", 0, splash_size, this);
    //imgDataDownload.setWindowTitle(QString("Pattern Data Download.."));
    //imgDataDownload.setWindowModality(Qt::WindowModal);
    //imgDataDownload.setLabelText(QString("Uploading to EVM"));
    //imgDataDownload.setValue(0);
    int imgDataDwld = 0;
    //imgDataDownload.setMaximum(origSize);
    //imgDataDownload.show();
    QApplication::processEvents();
    while(splash_size > 0)
    {
        int dnldSize = LCR_pattenMemLoad(master, splash_block + (origSize - splash_size), splash_size);
        if (dnldSize < 0)
        {
            // free(imageBuffer);
            showCriticalError("Downloading failed");
            //imgDataDownload.close();
            return -1;
        }

        splash_size -= dnldSize;

        if (splash_size < 0)
            splash_size = 0;

        imgDataDwld += dnldSize;
        //imgDataDownload.setValue(imgDataDwld);
         QApplication::processEvents();
        //if(imgDataDownload.wasCanceled())
        //{
          //  imgDataDownload.setValue(splash_size);
         //   imgDataDownload.close();
        //    return -1;
      //  }
    }
    QApplication::processEvents();
    //imgDataDownload.close();

    return 0;
}

/**
 * @brief MainWindow::GetMinDarktime
 * get the minimum accepted darktime based on the selected bit depth and DMD bolcks
 * @param bitDepth - I - bit Depth selected
 * @return
 */
int MainWindow::GetMinDarktime(int )
{
    return minPatExposure[0];
}

/**
 * @brief MainWindow::GetMinExposure
 * get the minimum accepted exposure based on the selected bit depth and DMD bolcks
 * @param bitDepth - I - Bitdepth of teh selected Pattern Image
 * @return
 */
int MainWindow::GetMinExposure(int bitDepth)
{
    return minPatExposure[bitDepth-1];
}

/**
 * @brief MainWindow::resizeEvent
 * redraws the Waveform window(i.e the Pattern Image window) on window resize
 */
void MainWindow::resizeEvent(QResizeEvent *)
{
    waveWindow->draw();
}


/***************Handler Functions**************************/

/**
 * @brief MainWindow::on_saveButton_patternSettings_clicked
 * capability to save the pattern settings in a file
 */
void MainWindow::on_saveButton_patternSettings_clicked()
{

    if(m_elements.size() <= 0)
    {
        showStatus("Error:No pattern sequence to save");
        return;
    }

    QString fileName;

    fileName = QFileDialog::getSaveFileName(this,QString("Enter name of the settings file"),
                                            m_ptnSettingPath,
                                            tr("settings files(*.txt)"));


    if(fileName.isEmpty())
        return;

    QFile settingsFile(fileName);




    if(!settingsFile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        showStatus("Error:Unable to open file for saving\n");
        return;
    }

    QDir dir = QFileInfo(settingsFile).absoluteDir();
    m_ptnSettingPath = dir.absolutePath();
    settings.setValue("PtnSettingPath",m_ptnSettingPath);

    QTextStream out(&settingsFile);

    if(m_videoPatternMode)
    {
        out << "Video Mode\n";

        for(int i=0;i<m_elements.size();i++)
        {
            out << m_elements[i].splashImageBitPos << ",";
            out << m_elements[i].bits <<",";
            out << m_elements[i].exposure <<",";
            out << m_elements[i].beforeZTime <<",";
            out << m_elements[i].color <<",";
            out << m_elements[i].trigIn <<",";
            out << m_elements[i].trigOut2 <<"\n";
        }

    }
    else
    {
        QDir myDir = QFileInfo(settingsFile).absoluteDir();

        out << "Normal Mode\n";
        for(int i=0;i<m_elements.size();i++)
        {
            //store only the realtive path of the image
            QString relPath = myDir.relativeFilePath(m_elements[i].name);

            out << relPath << ",";
            out << m_elements[i].bits <<",";
            out << m_elements[i].exposure <<",";
            out << m_elements[i].beforeZTime <<",";
            out << m_elements[i].color <<",";
            out << m_elements[i].trigIn <<",";
            out << m_elements[i].trigOut2 <<"\n";

        }
    }

    settingsFile.close();
}

/**
 * @brief MainWindow::on_loadButton_patternSettings_clicked
 * capability to load a presaved settings from a file
 */
void MainWindow::on_loadButton_patternSettings_clicked()
{
    QString fileName;

    char dispStr[255];

    fileName = QFileDialog::getOpenFileName(this,
                                            QString("Choose Settings File"),
                                            m_ptnSettingPath,
                                            tr("Settings File(*.txt)"));

    if(fileName.isEmpty())
        return;

    QFile settingsFile(fileName);
    if(!settingsFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        showStatus("Unable to open the settings file\n");
        return;
    }


    //first clear the existing patterns on window

    if(m_elements.size() > 0)
        m_elements.clear();

    QDir dir = QFileInfo(settingsFile).absoluteDir();
    m_ptnSettingPath = dir.absolutePath();
    settings.setValue("PtnSettingPath",m_ptnSettingPath);

    QTextStream in(&settingsFile);

    QString line;

    if(m_videoPatternMode)
    {

        line = in.readLine();

        if(line != "Video Mode")
        {
            showStatus("Please select a valid Video Pattern settings file");
            return;
        }
        while(!in.atEnd())
        {
            PatternElement pattern;

            line = in.readLine();

            if(line == "\n" || line == "") //error checking for empty lines
                continue;

            QStringList list = line.split(",");

            //calculating the mask from startbit and bitdepth

            pattern.bits = (list.size() >= 2)?list[1].toInt():1;
            pattern.splashImageBitPos = (list.size() >= 1)?list[0].toInt():0x1;
            pattern.exposure  = (list.size() >= 3)?list[2].toInt():GetMinExposure(1);
            pattern.beforeZTime  = (list.size() >= 4)?list[3].toInt():0;
            pattern.color  = (list.size() >= 5)?PatternElement::Color(list[4].toInt()):PatternElement::RED ;
            pattern.trigIn = (list.size() >= 6)?list[5].toInt():false;
            pattern.trigOut2 = (list.size() >= 7)?list[6].toInt():true;

            m_elements.push_back(pattern);

        }
    }
    else
    {
        line = in.readLine();

        while(!in.atEnd())
        {
            PatternElement pattern;

            line = in.readLine();

            if(line == "\n" || line == "") //error checking for empty lines
                continue;

            QStringList list = line.split(",");

            if(list.size() == 0)
                continue;

            pattern.name = list[0];

            QString pFileStr = m_ptnSettingPath + "/" + list[0];

            QFile patternFile(pFileStr);

            //check if the pattern image file exists
            if(!patternFile.exists())
            {

                sprintf(dispStr, "the pattern image file %s does not exist", pFileStr.toStdString().c_str());
                showStatus(dispStr);
                return;
            }


            //backward capability for adding from List
            //where only the image file is given

            pattern.name = pFileStr;
            pattern.bits = (list.size() >= 2)?list[1].toInt():1;
            pattern.exposure  = (list.size() >= 3)?list[2].toInt():GetMinExposure(1);
            pattern.beforeZTime  = (list.size() >= 4)?list[3].toInt():0;
            pattern.color  = (list.size() >= 5)?PatternElement::Color(list[4].toInt()):PatternElement::RED ;
            pattern.trigIn = (list.size() >= 6)?list[5].toInt():false;
            pattern.trigOut2 = (list.size() >= 7)?list[6].toInt():true;

            m_elements.push_back(pattern);
            m_patternImageChange = true;

        }
    }
    if (m_elements.size() > 0)
    {
        waveWindow->updatePatternList(m_elements);
        waveWindow->draw();
        ui->selectAllButton->setEnabled(true);
        //ui->ptnSetting_groupBox->setEnabled(true);
        ui->removePatternsButton->setEnabled(true);
        on_patternSelect(m_elements.size()-1,m_elements);
    }
    settingsFile.close();

}

/**
 * @brief MainWindow::on_addPatternsButton_clicked
 */
void MainWindow::on_addPatternsButton_clicked()
{
    int i;
    int numPatAdded = 0;

    QStringList fileNames;

    //fileNames = QFileDialog::getOpenFileNames(this,
                                             // QString("Select Image for Pattern"),
                                            //  m_ptnImagePath,
                                            //  "*.bmp *.png");

    QDir directory = QFileDialog::getExistingDirectory(this,
                                                       QString("select directory"),
                                                       m_ptnImagePath);
    QStringList filters;
    filters << "*.png" << "*.jpg" << "*.bmp";

    QStringList list = directory.entryList(filters,QDir::Files|QDir::NoSymLinks);

    QCollator collator;
    collator.setNumericMode(true);

    std::sort(
         list.begin(),
         list.end(),
         [&collator](const QString &file1, const QString &file2)
         {
            return collator.compare(file1, file2) < 0;
         });

     for (int i = 0; i < list.size(); i++)
     {
         QString str = directory.path() +"/" + list.at(i);
         fileNames.append(str);
     }

     if(fileNames.isEmpty())
          return;

     //fileNames.sort();

     //QDir dir = QFileInfo(QFile(fileNames.at(0))).absoluteDir();
     m_ptnImagePath = directory.path();
     settings.setValue("PtnImagePath",m_ptnImagePath);

     for(i=0;i<m_elements.size();i++)
          m_elements[i].selected=false;

     for(i = 0; i < fileNames.size(); i++)
     {
#if 0
          QByteArray ba = fileNames.at(i).toLocal8Bit();
          int width, height;

          BMP_GetImageSize(ba.data(), &width, &height);
          if ((width != m_ptnWidth) || (height != m_ptnHeight))
          {
              if (m_dualAsic)
                 sprintf(errMsg, "Error: Cannot add image %s. Image resolution permitted is 2560 * 1600", ba.data());
              else
                 sprintf(errMsg, "Error: Cannot add image %s. Image resolution permitted is 1920 * 1080", ba.data());

              showCriticalError(errMsg);
                continue;
          }
#endif
       PatternElement pattern;

       if(m_elements.size()==0)
       {
           if (ui->exposure_lineEdit->text().isEmpty() || ui->BeforeZTime_lineEdit->text().isEmpty())
           {
               ExposureTime = 4000;
               BeforeZTime = 0;
           } else {
               ExposureTime = ui->exposure_lineEdit->text().toInt();
               BeforeZTime = ui->BeforeZTime_lineEdit->text().toInt();
           }
           pattern.bits = 8;
           pattern.color = PatternElement::RED;
           pattern.exposure = ExposureTime;
           pattern.beforeZTime = BeforeZTime;
           pattern.trigIn = false;
           pattern.trigOut2 = true;
       }
       else
       {
           pattern.bits = m_elements[m_elements.size()-1].bits;
           pattern.color = m_elements[m_elements.size()-1].color;
           pattern.exposure = m_elements[m_elements.size()-1].exposure;
           pattern.beforeZTime = m_elements[m_elements.size()-1].beforeZTime;
           pattern.trigIn = m_elements[m_elements.size()-1].trigIn;
           pattern.trigOut2 = m_elements[m_elements.size()-1].trigOut2;
       }

       pattern.name = fileNames.at(i);
       pattern.selected = false;

       m_elements.append(pattern);
       numPatAdded++;
       m_patternImageChange = true;
    }

    if (m_elements.size() > 0)
    {
        waveWindow->updatePatternList(m_elements);
        waveWindow->draw();
        ui->selectAllButton->setEnabled(true);
        //ui->ptnSetting_groupBox->setEnabled(true);
        ui->removePatternsButton->setEnabled(true);
        on_patternSelect(0,m_elements);
    }

    return;
}

/**
 * @brief MainWindow::on_removePatternsButton_clicked
 */
void MainWindow::on_removePatternsButton_clicked()
{
    QList<PatternElement>::Iterator pattern = m_elements.begin();
    while(pattern != m_elements.end())
    {
        if(pattern->selected)
        {
            pattern = m_elements.erase(pattern);
            m_patternImageChange = true;
        }
        else
            pattern++;
    }

    waveWindow->updatePatternList(m_elements);
    waveWindow->select(WaveFormWindow::SELECT_NONE, -1);
    waveWindow->draw();
    if (!m_elements.size())
    {
        ui->selectAllButton->setEnabled(false);
    }
    if (m_elements.size() <= 0)
    {
        ui->PatternIndex->setText("Empty");
    }
}

/**
 * @brief MainWindow::on_startPatSequence_Button_clicked
 */
void MainWindow::on_startPatSequence_Button_clicked()
{
    if (USB_Connected == false || ui->SerialPort->count() == 0)
    {
        showError("USB not Connected!!");
        return;
    }

    if (m_elements.size() <= 0)
    {
        showStatus("Error:No pattern sequence to Start");
        return;
    }

    ZLiftDelay = ui->ZLiftdelay->text().toInt();
    PrintingDelay = ui->PrintingDelay->text().toInt();

    QString cmd = ui->StartPrintGcode->toPlainText();

    if (ui->ManualHoming->isChecked())
    {
        //ZAxisMovement(cmd);
        int homingDelay = ui->HomingDelay->text().toInt();
        AutoSendPatSeq->start(homingDelay + PrintingDelay);
        mStartTime = QDateTime::currentDateTime();
    } else {
        if (cmd.contains("G28"))
        {
            ZAxisMovement(cmd);
            WaitforEndstopHit = true;
        } else {
            showError("Please Enter G28 Command in Start Print Gcode!!");
            return;
        }
    }

    ExposureTime = ui->exposure_lineEdit->text().toInt();
    BeforeZTime = ui->BeforeZTime_lineEdit->text().toInt();

    delay = (ExposureTime + BeforeZTime) + 500;
    ui->stopPatSequence_Button->setEnabled(true);
    ui->pausePatSequence_Button->setEnabled(true);
    ui->startPatSequence_Button->setEnabled(false);
    ui->UpdateTotalTime->setEnabled(false);
}

/**
 * @brief MainWindow::on_pausePatSequence_Button_clicked
 */
void MainWindow::on_pausePatSequence_Button_clicked()
{
    if (AutoSendPatSeq->isActive())
    {
        QThread::msleep(delay - BeforeZTime);
        QIcon icon(":/new/prefix1/Icons/my_resume.png");
        ui->pausePatSequence_Button->setIcon(icon);
        Auto_m_elements.clear();
        AutoSendPatSeq->stop();
        mResumeSessionTime = mSessionTime;
        if (LCR_PatternDisplay(0x1) < 0)
            showError("Unable to pause pattern display");
        ui->UpdateTotalTime->setEnabled(true);
    }
    else
    {
        QIcon icon(":/new/prefix1/Icons/my_pause.png");
        ui->pausePatSequence_Button->setIcon(icon);
        mStartTime = QDateTime::currentDateTime();
        AutoSendPatSeq->start(2000);
        ui->UpdateTotalTime->setEnabled(false);
    }
}

/**
 * @brief MainWindow::on_stopPatSequence_Button_clicked
 */
void MainWindow::on_stopPatSequence_Button_clicked()
{
    Auto_m_elements.clear();
    ui->startPatSequence_Button->setEnabled(true);
    ui->pausePatSequence_Button->setEnabled(false);
    ui->stopPatSequence_Button->setEnabled(false);
    ui->UpdateTotalTime->setEnabled(true);
    QIcon icon(":/new/prefix1/Icons/my_pause.png");
    ui->pausePatSequence_Button->setIcon(icon);
    waveWindow->ClearElements();
    waveWindow->updatePatternList(m_elements);
    on_patternSelect(0,m_elements);
    waveWindow->draw();
    AutoSendPatSeq->stop();
    ui->StartTime->setText("00:00:00");
    WaitforEndstopHit = false;
    mResumeSessionTime = 0;

    PatCount = 0;

    if (AutoSendPatSeq->isActive())
    {
        QThread::msleep(delay - BeforeZTime);
        AutoSendPatSeq->stop();
    } else {
        QThread::msleep(0);
        AutoSendPatSeq->stop();
    }

    if (LCR_PatternDisplay(0x0) < 0)
        showError("Unable to stop pattern display");
}

/**
 * @brief MainWindow::on_selectAllButton_clicked
 */
void MainWindow::on_selectAllButton_clicked()
{
    waveWindow->updatePatternList(m_elements);
    waveWindow->select(WaveFormWindow::SELECT_ALL, -1);
    waveWindow->draw();
}

/**
 * @brief MainWindow::on_patternSelect
 * updates the GUI contraols on selecting a particular pattern
 * @param index - I - index of teh selected PatternElement
 * @param patElem - I - the selected pattern element
 */
void MainWindow::on_patternSelect(int index, QList<PatternElement> patElem)
{
    m_elements = patElem;
    if (index < 0)
    {
        ui->removePatternsButton->setEnabled(false);
        if (m_elements.size() <= 0)
        {
            ui->PatternIndex->setText("Empty");
        }else
        {
            on_patternSelect(0, m_elements);
        }
        return;
    }

    QString lenght = QString::number(m_elements.size() - 1);
    ui->PatternIndex->setText(QString::number(index)+ " / " + lenght);
    ui->triggerIn_checkBox->setChecked(m_elements[index].trigIn);
    ui->triggerOut2_checkBox->setChecked(m_elements[index].trigOut2);
    ui->exposure_lineEdit->setText(QString::number(m_elements[index].exposure));
    ui->BeforeZTime_lineEdit->setText(QString::number(m_elements[index].beforeZTime));
    ui->removePatternsButton->setEnabled(true);

    return;
}

/**
 * @brief MainWindow::on_triggerIn_checkBox_clicked
 */
void MainWindow::on_triggerIn_checkBox_clicked()
{
    bool changed = false;

    for (int i = 0; i < m_elements.size(); i++)
    {
        if (m_elements[i].selected)
        {
            m_elements[i].trigIn = ui->triggerIn_checkBox->isChecked();
            changed = true;
        }
    }

    if (changed)
    {
        waveWindow->updatePatternList(m_elements);
        waveWindow->draw();
    }
}

/**
 * @brief MainWindow::on_triggerOut2_checkBox_clicked
 */
void MainWindow::on_triggerOut2_checkBox_clicked()
{
    bool changed = false;

    for (int i = 0; i < m_elements.size(); i++)
    {
        if (m_elements[i].selected)
        {
            m_elements[i].trigOut2 = ui->triggerOut2_checkBox->isChecked();
            changed = true;
        }
    }

    if (changed)
    {
        waveWindow->updatePatternList(m_elements);
        waveWindow->draw();
    }
}

/**
 * @brief MainWindow::on_exposure_lineEdit_editingFinished
 */
void MainWindow::on_exposure_lineEdit_editingFinished()
{
    bool changed = false;

    for (int i = 0; i < m_elements.size(); i++)
    {
        //if (!m_elements[i].selected)
           // continue;
        int exposure = ui->exposure_lineEdit->text().toInt();
        //int minExp = GetMinExposure(m_elements[i].bits);
        if (exposure < 500)
        {
            char errMsg[255];
            sprintf(errMsg, "Exposure value should be greater than %d ms\n", 500);
            showStatus(errMsg);
            return;
        }
        m_elements[i].exposure = exposure;
        changed = true;
    }
    if (changed)
    {
        waveWindow->updatePatternList(m_elements);
        //	waveWindow->draw();
    }
}

/**
 * @brief MainWindow::on_darkPeriod_lineEdit_editingFinished
 */
void MainWindow::on_BeforeZTime_lineEdit_editingFinished()
{
    bool changed = false;

    for (int i = 0; i < m_elements.size(); i++)
    {
        //if (!m_elements[i].selected)
            //continue;
        int beforeZLifttime = ui->BeforeZTime_lineEdit->text().toInt();

        int minDarktime = 0;
        if ((beforeZLifttime) && (beforeZLifttime < minDarktime))
        {
            char errMsg[255];
            sprintf(errMsg, "Error: Dark time should be greater than %d ms\n", minDarktime);
            showStatus(errMsg);
            return;
        }
        m_elements[i].beforeZTime = beforeZLifttime;
        changed = true;
    }

    if (changed)
    {
        waveWindow->updatePatternList(m_elements);
        waveWindow->draw();
    }
}

/**
 * @brief Updates the minimum exposure period for each bitdepth
 */
void MainWindow::updateMinExposure(void)
{
    /* Get the min exposure through command */
    if(LCR_GetMinPatExposure(minPatExposure) < 0)
    {
        /* If the command fails, use the default values */

        /* Exposure for bit depth */
        static const int bitDepthExposure[2][8] =
        {
            {105, 304, 394, 823, 1215, 1487, 1998, 4046},
            {105, 304, 380, 733, 1215, 1487, 1998, 4046}
        };

        /* Exposure for DMD block (1 bit) */
        static const int oneBitExposure[2][16] =
        {
            { 24, 45, 45, 45, 48, 54, 60, 66, 72, 78, 84, 90, 96, 101, 105,   0 },
            { 24, 42, 42, 42, 45, 51, 56, 61, 67, 72, 77, 83, 88,  93,  99, 105 }
        };

        for(int i = 0; i < 8; i++)
        {
            if(i == 0)
                minPatExposure[i] = oneBitExposure[m_dualAsic][i];
            else
                minPatExposure[i] = bitDepthExposure[m_dualAsic][i];
        }
    }
}


void MainWindow::SendPatSequence()
{
    if (PatCount < m_elements.size())
    {
        QString cmd = ui->StartLayerGcode->toPlainText();
        ZAxisMovement(cmd);

        PatternElement AutoPatSeq;
        AutoPatSeq.bits = m_elements[PatCount].bits;
        AutoPatSeq.color = m_elements[PatCount].color;
        AutoPatSeq.exposure = m_elements[PatCount].exposure * 1000;
        AutoPatSeq.beforeZTime = m_elements[PatCount].beforeZTime * 1000;
        AutoPatSeq.trigIn = m_elements[PatCount].trigIn;
        AutoPatSeq.trigOut2 = m_elements[PatCount].trigOut2;

        AutoPatSeq.name = m_elements[PatCount].name;
        AutoPatSeq.Tempindex = PatCount;

        m_patternImageChange = true;
        Auto_m_elements.append(AutoPatSeq);

        waveWindow->updatePatternSingleList(Auto_m_elements);
        waveWindow->select(WaveFormWindow::SELECT_SINGLE, PatCount);
        waveWindow->draw();

        LCR_ClearPatLut();

        uploadSingleImageSeq();
        StartSigleImageSeq();
    }
    else
    {
        QString cmd = ui->EndPrintGcode->toPlainText();
        ZAxisMovement(cmd);

        ui->startPatSequence_Button->setEnabled(true);
        ui->pausePatSequence_Button->setEnabled(false);
        ui->stopPatSequence_Button->setEnabled(false);
        ui->UpdateTotalTime->setEnabled(true);
        waveWindow->ClearElements();
        waveWindow->updatePatternList(m_elements);
        on_patternSelect(0,m_elements);
        waveWindow->draw();
        AutoSendPatSeq->stop();
        WaitforEndstopHit = false;
        mResumeSessionTime = 0;
        showStatus("Pattern sequence completed!!");
        ui->StartTime->setText("00:00:00");
        Auto_m_elements.clear();
        PatCount = 0;
        return;
    }

    QString delaycmd = "G4 P" + QString::number(delay);
    writeToBoard(delaycmd);

    QString cmd = ui->EndLayerGcode->toPlainText();
    ZAxisMovement(cmd);
    Auto_m_elements.clear();
    AutoSendPatSeq->setInterval(delay + ZLiftDelay);
    PatCount = PatCount + 1;
}

void MainWindow::ZAxisMovement(QString cmd)
{
    QStringList cmdbuffer = cmd.split(QRegExp("[;]"),QString::SkipEmptyParts);
    for (int i = 0; i<cmdbuffer.size(); i++)
    {
        QString temp = cmdbuffer.at(i) + "\n";
        writeToBoard(temp);
        //arduino->write(temp.toStdString().c_str());
    }
}

void MainWindow::uploadSingleImageSeq()
{
    int SingleSplashImage = 0;
    int ret;
    char errStr[255];
    //QTime waitEndTime;

    if(Auto_m_elements.size() <= 0)
    {
        showStatus("Error:No pattern sequence to send");
        return;
    }

    LCR_ClearPatLut();

    if (!m_videoPatternMode)
    {
       if (calculateSingleSplashImageDetails(&SingleSplashImage))
          return;
    }

    Auto_m_elements[0].splashImageBitPos = m_elements[PatCount].splashImageBitPos;
    Auto_m_elements[0].splashImageIndex = m_elements[PatCount].splashImageIndex;

    for (int i = 0; i < Auto_m_elements.size(); i++)
    {
        if(LCR_AddToPatLut(i, Auto_m_elements[i].exposure, true, Auto_m_elements[i].bits, Auto_m_elements[i].color, Auto_m_elements[i].trigIn, Auto_m_elements[i].beforeZTime, Auto_m_elements[i].trigOut2, Auto_m_elements[i].splashImageIndex, Auto_m_elements[i].splashImageBitPos)<0)
        {
            sprintf(errStr,"Unable to add pattern number %d to the LUT",i);
            showError(QString::fromLocal8Bit(errStr));
            break;
        }
    }
    if (LCR_SendPatLut() < 0)
    {
        showError("Sending pattern LUT failed!");
        return;
    }

    ret = LCR_SetPatternConfig(Auto_m_elements.size(), Auto_m_elements.size());

    if(ret < 0)
    {
        showError("Sending pattern LUT size failed!!");
        return;
    }

    if (m_patternImageChange)
    {
        if(updateSinglePatternMemory(1, false) == 0)
        {
           m_patternImageChange = false;
        }
    }
}

void MainWindow::StartSigleImageSeq()
{
    if (LCR_SetPatternConfig(Auto_m_elements.size(), Auto_m_elements.size()) < 0)
    {
        showError("Error in setting LUT Configuration!");
        return;
    }
    if (LCR_PatternDisplay(0x2) < 0)
        showError("Unable to start pattern display");
}


void MainWindow::on_UpdateTotalTime_clicked()
{
    if (m_elements.size() <= 0)
    {
        showStatus("Error: No pattern sequence to Count");
        return;
    }

    bool changed = false;

    for (int i = 0; i < m_elements.size(); i++)
    {
        int exposure = ui->exposure_lineEdit->text().toInt();
        int beforeZlifttime = ui->BeforeZTime_lineEdit->text().toInt();

        m_elements[i].exposure = exposure;
        m_elements[i].beforeZTime = beforeZlifttime;
        changed = true;
    }
    if (changed)
    {
        waveWindow->updatePatternList(m_elements);
        waveWindow->draw();
    }

    ZLiftDelay = ui->ZLiftdelay->text().toInt();
    PrintingDelay = ui->PrintingDelay->text().toInt();

    ExposureTime = ui->exposure_lineEdit->text().toInt();
    BeforeZTime = ui->BeforeZTime_lineEdit->text().toInt();

    delay = (ExposureTime + BeforeZTime) + 500;

    int TotalExposureTime = ExposureTime * m_elements.size();
    int TotalDarkTime = BeforeZTime * m_elements.size();

    int TotalDelay = ZLiftDelay * (m_elements.size() + 1);

    int Totaltime = (PrintingDelay + TotalExposureTime + TotalDarkTime + TotalDelay);

    unsigned int h = Totaltime / 1000 / 60 / 60;
    unsigned int m = (Totaltime / 1000 / 60) - (h * 60);
    unsigned int s = (Totaltime / 1000) - ((m + (h * 60))* 60); //<<<<<<<<<<<<<<<<<<<<<<
    const QString diff = QString("%1:%2:%3")
                            .arg(h, 2, 10, QChar('0'))
                            .arg(m, 2, 10, QChar('0'))
                            .arg(s, 2, 10, QChar('0'));
    ui->TotalTime->setText(diff);
}


void MainWindow::on_CalGrayValue_clicked()
{
 /*   if (m_elements.size() <= 0)
        {
            showStatus("Error: No pattern sequence to Count");
            return;
        }

        const QPixmap pixmap(m_elements[0].name);

        const QImage image = pixmap.toImage();
        const int width = image.width();
        const int height = image.height();
        //QBitArray bitArray(width*height);
        QVector<QVector<int>> matrix(height, QVector<int>(width, 0));
        int GrayCount = 0;

        for (int h=0; h<height; h++) {
            for (int w=0; w<width; w++) {
                //bitArray[h*width+w] = qGray(image.pixel(w,h));// > 254 ? 0 : 1;
                matrix[h][w] = qGray(image.pixel(w,h)) > 254 ? 1 : 0;
                if (matrix[h][w] == 1)
                    GrayCount++;
            }
        }

        QImage monoImage(width, height, QImage::Format_Mono);
        int y = ui->ImageProcessLoop->text().toInt();
        if (ui->ImageProcessLoop->text().isEmpty())
        {
            showStatus("Please Enter value for Image Process Loop!!");
            return;
        }

        if (y == 0)
        {
            for (int i=0; i<height; i++)
            {
                for (int j=0; j<width; j++)
                {
                    monoImage.setPixel(j,i,matrix[i][j]);
                }
            }
        }

        for (int x=0; x<y; x++)
        {
            QStringList RowData;
            QStringList ColumnData;
            QList<int> RowGrayCount;
            QList<int> ColumnGrayCount;

            for (int i=0; i<height; i++)
            {
                for (int j=0; j<width; j++)
                {
                    int RowCount = 0;
                    int tempwidth = j;
                    if (matrix[i][j] == 1)
                    {
                        while (matrix[i][j] != 0)
                        {
                            RowCount = RowCount + 1;
                            j++;
                        }
                        RowData.append(QString::number(i) + "," + QString::number(tempwidth)
                                            + "," + QString::number(j) +"," + ":" + QString::number(RowCount));
                    }
                }
            }

            for (int i=0; i<RowData.size(); i++)
            {
                QString Str = RowData.at(i);
                int loc = Str.indexOf(":",0,Qt::CaseInsensitive);
                Str.remove(0, loc + 1);
                RowGrayCount.append(Str.toInt());
            }

            int RowMax = *std::max_element(RowGrayCount.begin(), RowGrayCount.end());
            int RowMaxIndex = RowGrayCount.indexOf(RowMax,0);

            QString LargeRowData = RowData.at(RowMaxIndex);
            QStringList Strbuffer = LargeRowData.split(QRegExp("[,]"),QString::SkipEmptyParts);
            QString Row = Strbuffer[0];
            QString RowStart = Strbuffer[1];
            QString RowEnd = Strbuffer[2];

            for (int i=RowStart.toInt(); i<RowEnd.toInt(); i++)
            {
                int tempColumn = Row.toInt();
                int StartColumn = 0;
                int MaxCount = 0;
                if (matrix[tempColumn][i] == 1)
                {
                    while (matrix[tempColumn][i] != 0)
                    {
                        tempColumn--;
                    }
                    tempColumn = tempColumn + 1;
                    StartColumn = tempColumn;
                    while (matrix[tempColumn][i] != 0)
                    {
                        MaxCount = MaxCount + 1;
                        tempColumn++;
                    }
                    ColumnData.append(QString::number(i) + "," + QString::number(StartColumn)+ ","
                                      + QString::number(tempColumn) + "," + ":" + QString::number(MaxCount));
                 }
            }

            for (int i=0; i<ColumnData.size(); i++)
            {
                QString Str = ColumnData.at(i);
                int loc = Str.indexOf(":",0,Qt::CaseInsensitive);
                Str.remove(0, loc + 1);
                ColumnGrayCount.append(Str.toInt());
            }

            int Columnmax = *std::max_element(ColumnGrayCount.begin(), ColumnGrayCount.end());
            int ColumnMaxIndex = ColumnGrayCount.indexOf(Columnmax,0);

            QString LargeColumnData = ColumnData.at(ColumnMaxIndex);
            QStringList Strbuffer2 = LargeColumnData.split(QRegExp("[,]"),QString::SkipEmptyParts);
            //QString Column = Strbuffer2[0];
            QString ColumnStart = Strbuffer2[1];
            QString ColumnEnd = Strbuffer2[2];

            for (int i=0; i<height; i++)
            {
                for (int j=0; j<width; j++)
                {
                    if (i >= ColumnStart.toInt() && i <= ColumnEnd.toInt())
                    {
                        if (j >= RowStart.toInt() && j <= RowEnd.toInt())
                        {
                            monoImage.setPixel(j,i,0);
                            matrix[i][j] = 0;
                        } else {
                            monoImage.setPixel(j,i,matrix[i][j]);
                        }
                    } else {
                        monoImage.setPixel(j,i,matrix[i][j]);
                    }
                }
            }  */

         /*   for (int i=0; i<height; i++)
            {
                for (int j=0; j<width; j++)
                {
                    int tempheight = i + 160;
                    if (tempheight > height)
                        tempheight = height;
                    int tempwidth = j + 160;
                    if (tempwidth > width)
                        tempwidth = width;
                    int tempGrayCount = 0;
                    for (int h=i; h<tempheight; h++) {
                        for (int w=j; w<tempwidth; w++) {
                            int pixel = matrix[h][w];
                            if ( pixel == 1)
                            {
                                tempGrayCount = tempGrayCount + 1;
                            }
                            if (tempGrayCount >= 20000) {
                                for (int x=i; x<tempheight; x++) {
                                    for (int y=j; y<tempwidth; y++) {
                                     monoImage.setPixel(y, x, 0);
                                    }
                                }
                            } else {
                                monoImage.setPixel(w, h, pixel);
                            }
                        }
                    }
                    j = j + 159;
                }
                i = i + 159;
            }  */
       // }

       // QString str3 = m_ptnImagePath + "/1_5" + ".bmp";
       // monoImage.save(str3);
       // showStatus("Done!!!");
}


