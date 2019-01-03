#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QFileDialog>
#include <QTextStream>
#include <QTimer>


void MainWindow::on_ConnectBoard_clicked()
{
    if (ui->SerialPort->count() == 0)
    {
        showError("USB not Connected!!");
        return;
    }
    QString usbport = ui->SerialPort->currentText();
    m_Buadrate = ui->Baudrate->currentText();
    settings.setValue("Buadrate",m_Buadrate);

    if (!BoardConnected)
    {
        arduino->setPortName(usbport);
        arduino->open(QIODevice::ReadWrite);
        switch (m_Buadrate.toInt()) {
        case 9600:
            arduino->setBaudRate(QSerialPort::Baud9600);
            break;
        case 57600:
            arduino->setBaudRate(QSerialPort::Baud57600);
            break;
        case 115200:
            arduino->setBaudRate(QSerialPort::Baud115200);
            break;
        case 250000:
            arduino->setBaudRate(250000);
            break;
        }
        arduino->setDataBits(QSerialPort::Data8);
        arduino->setParity(QSerialPort::NoParity);
        arduino->setStopBits(QSerialPort::OneStop);
        arduino->setFlowControl(QSerialPort::NoFlowControl);

        //arduino->open(QSerialPort::ReadWrite);
        if (arduino->isOpen()){
            arduino->write("M105\n");
            ui->SerialPort->setEnabled(false);
            ui->BoardStatus->setText("Com port open!!");
            BoardConnected = true;
            QObject::connect(arduino, SIGNAL(readyRead()), this, SLOT(serialdataRead()));
        } else {
            ui->BoardStatus->setText("Com port denied");
            return;
        }
    }
    else
    {
        BoardConnected = false;
        arduino->close();
        arduino->reset();
        arduino->flush();
        arduino->clear();
        if (!arduino->isOpen())
        {
            ui->BoardStatus->setText("Com port close!!");
            ui->SerialPort->setEnabled(true);
        }
    }
}

void MainWindow::getSerialPort()
{
    ui->SerialPort->clear();
    ui->BoardStatus->clear();
    foreach(const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts())
    {
        ui->SerialPort->addItem(serialPortInfo.portName());
    }

    if (ui->SerialPort->count() != 0)
    {
        ui->SerialPort->setEnabled(true);
    }
}

void MainWindow::on_ManualHoming_clicked()
{
    ui->HomeDelay->setEnabled(true);
    ui->HomingDelay->setEnabled(true);
}

void MainWindow::on_AutoHoming_clicked()
{
    ui->HomeDelay->setEnabled(false);
    ui->HomingDelay->setEnabled(false);
    ui->HomingDelay->setText(NULL);
}

void MainWindow::on_Moveup100_clicked()
{
    writeToBoard("G1 Z100 F1000 \n");
}

void MainWindow::on_Movedown100_clicked()
{
    writeToBoard("G1 Z-100 F1000 \n");
}

void MainWindow::on_AutoHome_clicked()
{
    arduino->write("G28 Z0 \n");
}

void MainWindow::on_Moveup01_clicked()
{
    writeToBoard("G1 Z0.1 F1000 \n");
}

void MainWindow::on_Movedown50_clicked()
{
    writeToBoard("G1 Z-50 F1000 \n");
}

void MainWindow::on_Moveup50_clicked()
{
    writeToBoard("G1 Z50 F1000 \n");
}

void MainWindow::on_Moveup10_clicked()
{
    writeToBoard("G1 Z10 F1000 \n");
}

void MainWindow::on_Movedown10_clicked()
{
    writeToBoard("G1 Z-10 F1000 \n");
}

void MainWindow::on_Moveup1_clicked()
{
    writeToBoard("G1 Z1 F1000 \n");
}

void MainWindow::on_Movedown1_clicked()
{
    writeToBoard("G1 Z-1 F1000 \n");
}

void MainWindow::on_Movedown01_clicked()
{
    writeToBoard("G1 Z-0.1 F1000 \n");
}

void MainWindow::writeToBoard(QString cmd)
{
    if (BoardConnected)
    {
        arduino->write("G91\n");
        arduino->write(cmd.toStdString().c_str());
    } else {
        showStatus("USB not connected!!");
    }
}

void MainWindow::serialdataRead()
{
   while (arduino->canReadLine()) {
       QByteArray SerialData = arduino->readLine();
       QString myString(SerialData);

       // Write code to know Endstop Hits
        if (WaitforEndstopHit == true)
        {
            if (myString.startsWith("Z_EndStop_Hit")) {
                AutoSendPatSeq->start(PrintingDelay);
                mStartTime = QDateTime::currentDateTime();
            }
            if (myString.startsWith("Lift Complete")) {
                //ZLiftComplete = true;
            }
        }
   }
}

void MainWindow::on_SendManualGcode_clicked()
{
    QString cmd = ui->ManualGcode->toPlainText();
    QStringList cmdbuffer = cmd.split(QRegExp("[;]"),QString::SkipEmptyParts);

    for (int i = 0; i<cmdbuffer.size(); i++)
    {
        QString temp = cmdbuffer.at(i) + "\n";
        writeToBoard(temp);
    }
}

void MainWindow::on_ClearManualGcode_clicked()
{
    ui->ManualGcode->clear();
}

void MainWindow::on_MotorConDisable_clicked()
{
    QString cmd = "M84";
    writeToBoard(cmd);
}

void MainWindow::on_AutoBedLevel_clicked()
{
    //Write code for Auto Bed Levelling..
}

void MainWindow::on_SaveMacProfile_clicked()
{
    QString filename;

    if (ui->ProfileName->toPlainText().isEmpty()) {
        showStatus("Warning:Please Load defualt Profile!!");
        return;
    }

    filename = QFileDialog::getSaveFileName(this, QString("Enter name of profile"),
                                            m_ptnProfilePath,
                                            tr("setting files(*.fff)"));

    if(filename.isEmpty())
        return;

    QFile settingsFile(filename);

    if(!settingsFile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        showStatus("Error:Unable to save file\n");
        return;
    }

    QDir dir = QFileInfo(settingsFile).absoluteDir();
    m_ptnProfilePath = dir.absolutePath();
    settings.setValue("PtnProfilePath",m_ptnProfilePath);

    QTextStream out(&settingsFile);
    QString str = QFileInfo(filename).fileName();

    if (!ui->ProfileName->toPlainText().isEmpty())
    {
        out << "Machine Profile Name:" + str << "," << "\n";
        ui->ProfileName->setText(str);
    }

    if (!ui->StartPrintGcode->toPlainText().isEmpty())
    {
        out << "Start Print Gcode:" + ui->StartPrintGcode->toPlainText() << "," << "\n";
    }

    if (!ui->EndPrintGcode->toPlainText().isEmpty())
    {
        out << "End Print Gcode:" + ui->EndPrintGcode->toPlainText() << "," << "\n";
    }

    if (!ui->StartLayerGcode->toPlainText().isEmpty())
    {
        out << "Start Layer Gcode:" + ui->StartLayerGcode->toPlainText() << "," << "\n";
    }

    if (!ui->EndLayerGcode->toPlainText().isEmpty())
    {
        out << "End Layer Gcode:" + ui->EndLayerGcode->toPlainText() << "," << "\n";
    }

    if (!ui->ZLiftdelay->text().isEmpty())
    {
        out << "Z Lift Delay:" + ui->ZLiftdelay->text() << "," << "\n";
    }

    if (!ui->PrintingDelay->text().isEmpty())
    {
        out << "Printing Delay:" + ui->PrintingDelay->text() << "," << "\n";
    }

    if (!ui->Intensity_lineEdit->text().isEmpty())
    {
        out << "Intensity:" + ui->Intensity_lineEdit->text() << "," << "\n";
    }

    if (!ui->BaseLayerCount->text().isEmpty())
    {
        out << "Base Layer Count:" + ui->BaseLayerCount->text() << "," << "\n";
    }

    if (!ui->BaseLayerIntensity->text().isEmpty())
    {
        out << "Base Intensity:" + ui->BaseLayerIntensity->text() << "," << "\n";
    }

    if (!ui->MidLayerCount->text().isEmpty())
    {
        out << "Mid Layer Count:" + ui->MidLayerCount->text() << "," << "\n";
    }

    if (!ui->MidLayerIntensity->text().isEmpty())
    {
        out << "Mid Intensity:" + ui->MidLayerIntensity->text() << "," << "\n";
    }

    if (!ui->exposure_lineEdit->text().isEmpty())
    {
        out << "Exposure Time:" + ui->exposure_lineEdit->text() << "," << "\n";
    }

    if (!ui->BeforeZTime_lineEdit->text().isEmpty())
    {
        out << "Before Z Time:" + ui->BeforeZTime_lineEdit->text() << "," << "\n";
    }

    if (ui->AutoHoming->isChecked())
    {
        out << "Auto Homing:true" << "," << "\n";
        out << "Manual Homing:false" << "," << "\n";
        out << "Homing Delay:NULL" << "," << "\n";
    }

    if (ui->ManualHoming->isChecked())
    {
        out << "Auto Homing:false" << "," << "\n";
        out << "Manual Homing:true" << "," << "\n";
        if (ui->HomingDelay->text().toInt() == 0) {
            out << "Homing Delay:0" << "," << "\n";
        } else {
            out << "Homing Delay:" + ui->HomingDelay->text() << "," << "\n";
        }
    }

    settingsFile.close();
}

void MainWindow::on_LoadMacProfile_clicked()
{
    QString fileName;

    //char dispStr[255];

    if (!DefaultProfileloaded && folderExists(m_ptnProfilePath)) {
        fileName = m_ptnProfilePath + "/default.fff";
    } else {
        fileName = QFileDialog::getOpenFileName(this,
                                                QString("Choose Profile File"),
                                                m_ptnProfilePath,
                                                tr("Settings File(*.fff)"));
    }

    if(fileName.isEmpty())
        return;

    QFile settingsFile(fileName);
    if(!settingsFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        showStatus("Unable to open the Machine Profile file\n");
        return;
    }
    DefaultProfileloaded = true;

    ui->ProfileName->setPlainText(NULL);
    ui->StartPrintGcode->setPlainText(NULL);
    ui->EndPrintGcode->setPlainText(NULL);
    ui->StartLayerGcode->setPlainText(NULL);
    ui->EndLayerGcode->setPlainText(NULL);
    ui->ZLiftdelay->setText(NULL);
    ui->PrintingDelay->setText(NULL);
    ui->Intensity_lineEdit->setText(NULL);
    ui->BaseLayerCount->setText(NULL);
    ui->BaseLayerIntensity->setText(NULL);
    ui->MidLayerCount->setText(NULL);
    ui->MidLayerIntensity->setText(NULL);
    ui->exposure_lineEdit->setText(NULL);
    ui->BeforeZTime_lineEdit->setText(NULL);
    ui->AutoHoming->setChecked(false);
    ui->ManualHoming->setChecked(false);
    ui->HomingDelay->setEnabled(false);
    ui->HomingDelay->setText(NULL);

    QDir dir = QFileInfo(settingsFile).absoluteDir();
    m_ptnProfilePath = dir.absolutePath();
    settings.setValue("PtnProfilePath",m_ptnProfilePath);

    QTextStream in(&settingsFile);

    QString line;
    line = in.readAll();

    QStringList list = line.split(",");
    for (int i = 0; i<list.size()-1;i++)
    {
       QString str = list[i];

       if (str.contains("\n"))
       {
          str.remove(0,1);
       }

       QStringList Strbuffer = str.split(QRegExp("[:]"),QString::SkipEmptyParts);
       if (!Strbuffer.isEmpty())
       {
           if (Strbuffer[0] == "Machine Profile Name")
           {
               ui->ProfileName->setPlainText(Strbuffer[1]);
           }
           if (Strbuffer[0] == "Start Print Gcode")
           {
               ui->StartPrintGcode->setPlainText(Strbuffer[1]);
           }
           if (Strbuffer[0] == "End Print Gcode")
           {
               ui->EndPrintGcode->setPlainText(Strbuffer[1]);
           }
           if (Strbuffer[0] == "Start Layer Gcode")
           {
               ui->StartLayerGcode->setPlainText(Strbuffer[1]);
           }
           if (Strbuffer[0] == "End Layer Gcode")
           {
               ui->EndLayerGcode->setPlainText(Strbuffer[1]);
           }
           if (Strbuffer[0] == "Z Lift Delay")
           {
               ui->ZLiftdelay->setText(Strbuffer[1]);
           }
           if (Strbuffer[0] == "Printing Delay")
           {
               ui->PrintingDelay->setText(Strbuffer[1]);
           }
           if (Strbuffer[0] == "Intensity")
           {
               ui->Intensity_lineEdit->setText(Strbuffer[1]);
           }
           if (Strbuffer[0] == "Base Layer Count")
           {
               ui->BaseLayerCount->setText(Strbuffer[1]);
           }
           if (Strbuffer[0] == "Base Intensity")
           {
               ui->BaseLayerIntensity->setText(Strbuffer[1]);
           }
           if (Strbuffer[0] == "Mid Layer Count")
           {
               ui->MidLayerCount->setText(Strbuffer[1]);
           }
           if (Strbuffer[0] == "Mid Intensity")
           {
               ui->MidLayerIntensity->setText(Strbuffer[1]);
           }
           if (Strbuffer[0] == "Exposure Time")
           {
               ui->exposure_lineEdit->setText(Strbuffer[1]);
           }
           if (Strbuffer[0] == "Before Z Time")
           {
               ui->BeforeZTime_lineEdit->setText(Strbuffer[1]);
           }
           if (Strbuffer[0] == "Auto Homing")
           {
               if (Strbuffer[1] == "true")
               {
                   ui->AutoHoming->setChecked(true);
                   ui->ManualHoming->setChecked(false);
                   ui->HomingDelay->setEnabled(false);
               }
           }
           if (Strbuffer[0] == "Manual Homing")
           {
               if (Strbuffer[1] == "true")
               {
                   ui->AutoHoming->setChecked(false);
                   ui->ManualHoming->setChecked(true);
                   ui->HomingDelay->setEnabled(true);
               }
           }
           if (Strbuffer[0] == "Homing Delay")
           {
               if (Strbuffer[1] == "NULL")
               {
                   ui->HomingDelay->setText(NULL);
               }else {
                   ui->HomingDelay->setText(Strbuffer[1]);
               }
           }
       }
       else {
           showError("No Matching found");
           return;
       }
    }
}

bool MainWindow::folderExists(QString path) {
    if (QDir(path).exists()) {
        return true;
    } else {
        return false;
    }
}
