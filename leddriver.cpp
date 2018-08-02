#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "API.h"
#include "usb.h"
#include <QTimer>
#include <QThread>
#include <QMessageBox>

/**
 * handler function for connectButton on LED Driver page and clicked() event
 * Checks for the USB connection and
 * appropriately sets the "Connected" and "Disconnected"
 * After gets connected read data form DLP Light crafter
 */
void MainWindow::on_pushButton_ConnectLED_clicked()
{
    if(_connected1)
    {
        _connected1 =false;
        _attached1 =false;
        AHid_Deregister(_pipe1);
        _pipe1 = 0;
        ui->label_LEDDriverStatus->setText("Light Engine disconnected!!");
    }
    else
    {
        unsigned char buffer[0x400] = {0};
        unsigned int bufferSize = 0x400;
        _outputCount1 = 0;
        _vid1 = 0x2da0;
        _pid1 = 0x110;
        _repID1 = 0;
        _repSize1 = 0x40;
        _register1 = AHid_Register(&_pipe1, _vid1,_pid1, -1,_repID1,_repSize1,1);

        if(AHid_Find(_pipe1) != 0)
        {
            _connected1 = false;
            _attached1 = false;
            AHid_Deregister(_pipe1);
            _pipe1 = 0;
            ui->label_LEDDriverStatus->setText("LED Driver not Discovered!");
        }
        else
        {
            _connected1 = true;
            _attached1 = true;
            ui->label_LEDDriverStatus->setText("Light Engine connected!");
            AHid_Identify(_pipe1, buffer, bufferSize);
            int index = 0;
            QString pipePath;
            for (int i = 0; i <=0x3ff; i++)
            {
                if(buffer[i] != 0)
                {
                    pipePath.append(buffer[i]);
                    index++;
                    if(buffer[i] == 0x7d)
                    {
                        break;
                    }
                }
            }
            ui->USBDevicePath_TextEdit->setText(pipePath);
        }
   }
   if(!_connected2)
   {
       _inputCount2 = 0;
       _register2 = AHid_Register(&_pipe2,_vid1,_pid1,-1,_repID1,_repSize1,0);
       if(AHid_Find(_pipe2) == 0)
       {
           _connected2 = true;
           _attached2 = true;
           usbPollTimer->start();
       }
       else
       {
           _connected2 = false;
           _attached2 = false;
           AHid_Deregister(_pipe2);
           _pipe2 = 0;
       }
   }
   else
   {
       _connected2 = false;
       _attached2 = false;
       usbPollTimer->stop();
       AHid_Deregister(_pipe2);
       _pipe2 = 0;
   }
   updateControls();
}

void MainWindow::on_pushButton_RestartLEDDriver_clicked()
{
    if (!_connected1)
    {
        showStatus("Error: Please connect LED Engine!!");
        return;
    }
    unsigned char buffer[0x40] = {0};
    unsigned int written = 0;
    usbPollTimer->stop();
    buffer[0] = 0;
    buffer[1] = 1;
    buffer[2] = 3;
    buffer[3] = 0;
    buffer[4] = 2;
    buffer[5] = 0x10;
    buffer[6] = 0x10;
    _write1 = AHid_Write(_pipe1, buffer, _repSize1, &written);
}

void MainWindow::on_pushButton_EnableIntensityReg_clicked()
{
    if (!_connected1)
    {
        showStatus("Error: Please connect LED Engine!!");
        return;
    }
    unsigned char buffer[0x40] = {0};
    unsigned int written = 0;
    buffer[0] = 0;
    buffer[1] = 1;
    buffer[2] = 3;
    buffer[3] = 0;
    buffer[4] = 5;
    buffer[5] = 0x1a;
    if(ui->checkBox_IntensityRegEnable->isChecked())
    {
        buffer[6] = 0;
        ui->pushButton_EnableIntensityReg->setText("Disable Intensity Regulation");
    }
    else
    {
        buffer[6] = 1;
        ui->pushButton_EnableIntensityReg->setText("Enable Intensity Regulation");
    }
    _write1 = AHid_Write(_pipe1, buffer, _repSize1, &written);
}

void MainWindow::on_pushButton_SetIntensity_clicked()
{
    if (!_connected1)
    {
        showStatus("Error: Please connect LED Engine!!");
        return;
    }
    unsigned char buffer[0x40] = {0};
    unsigned int written = 0;
    int number = ui->Intensity_lineEdit->text().toInt();

    if(number > 18000)
    {
        showStatus("Error: Enter value below 18000!!");
        return;
    }

    QByteArray bits;
    QString data = bits.setNum(number,16);

    QByteArray bytes = QByteArray::fromHex(data.toUtf8());
    QByteArray bytes22;

    int j = bytes.length()-1;
    for (int i = 0; i<bytes.length();i++)
    {
        bytes22[j] = bytes[i];
        j = j-1;
    }
    buffer[0] = 0;
    buffer[1] = 1;
    buffer[2] = 6;
    buffer[3] = 0;
    buffer[4] = 4;
    buffer[5] = 0x1a;
    buffer[6] = bytes22[3];
    buffer[7] = bytes22[2];
    buffer[8] = bytes22[1];
    buffer[9] = bytes22[0];
    _write1 = AHid_Write(_pipe1, buffer, _repSize1, &written);
}

void MainWindow::on_pushButton_SetLEDCurrent_clicked()
{
    if (!_connected1)
    {
        showStatus("Error: Please connect LED Engine!!");
        return;
    }
    unsigned char buffer[0x40] = {0};
    unsigned int written = 0;
    int number = ui->LEDCurrent_lineEdit->text().toInt();

    if (number > 18000)
    {
        showStatus("Error: Enter value below 18000!!");
        return;
    }

    QByteArray bits;
    QString data = bits.setNum(number,16);

    QByteArray bytes = QByteArray::fromHex(data.toUtf8());
    QByteArray bytes22;

    int j = bytes.length() - 1;
    for (int i = 0; i<bytes.length();i++)
    {
        bytes22[j] = bytes[i];
        j = j - 1;
    }
    buffer[0] = 0;
    buffer[1] = 1;
    buffer[2] = 4;
    buffer[3] = 0;
    buffer[4] = 2;
    buffer[5] = 0x1a;
    buffer[6] = bytes22[1];
    buffer[7] = bytes22[0];
    _write1 = AHid_Write(_pipe1, buffer, _repSize1, &written);
}

void MainWindow::on_pushButton_LEDPWMON_OFF_clicked()
{
    if (!_connected1)
    {
        showStatus("Error: Please connect LED Engine!!");
        return;
    }
    unsigned char buffer[0x40] = {0};
    unsigned int written = 0;
    buffer[0] = 0;
    buffer[1] = 1;
    buffer[2] = 3;
    buffer[3] = 0;
    buffer[4] = 1;
    buffer[5] = 0x1a;
    if(ui->pushButton_LEDPWMON_OFF->text() == "LED PWM OFF")
    {
        buffer[6] = 0xff;
        ui->pushButton_LEDPWMON_OFF->setText("LED PWM ON");
    }
    else
    {
        buffer[6] = 0;
        ui->pushButton_LEDPWMON_OFF->setText("LED PWM OFF");
    }
    _write1 = AHid_Write(_pipe1, buffer, _repSize1, &written);
}

void MainWindow::on_pushButton_SwTrigger_clicked()
{
    if (!_connected1)
    {
        showStatus("Error: Please connect LED Engine!!");
        return;
    }
    unsigned char buffer[0x40] = {0};
    unsigned int written = 0;
    buffer[0] = 0;
    buffer[1] = 1;
    buffer[2] = 3;
    buffer[3] = 0;
    buffer[4] = 3;
    buffer[5] = 0x12;
    buffer[6] = 2;
    _write1 = AHid_Write(_pipe1, buffer, _repSize1, &written);
}


void MainWindow::on_pushButton_ExTrigger_clicked()
{
    if (!_connected1)
    {
        showStatus("Error: Please connect LED Engine!!");
        return;
    }
    unsigned char buffer[0x40] = {0};
    unsigned int written = 0;
    buffer[0] = 0;
    buffer[1] = 1;
    buffer[2] = 3;
    buffer[3] = 0;
    buffer[4] = 3;
    buffer[5] = 0x12;
    buffer[6] = 1;
    _write1 = AHid_Write(_pipe1, buffer, _repSize1, &written);
}

void MainWindow::timer_read_led_driver_Status()
{
    unsigned char buffer[0x40] = {0};
    unsigned int written = 0;
    buffer[0] = 0x80;
    buffer[1] = 11;
    buffer[2] = 3;
    buffer[3] = 0;
    buffer[4] = 1;
    buffer[5] = 0x10;
    _write1 = AHid_Write(_pipe1, buffer, _repSize1, &written);
    On_DataReceived();
    QThread::msleep(10);
    buffer[4] = 1;
    buffer[5] = 0x1c;
    _write1 = AHid_Write(_pipe1, buffer, _repSize1, &written);
    On_DataReceived();
    QThread::msleep(10);
    buffer[4] = 1;
    buffer[5] = 0x1b;
    _write1 = AHid_Write(_pipe1, buffer, _repSize1, &written);
    On_DataReceived();
    QThread::msleep(10);
    buffer[4] = 2;
    buffer[5] = 0x1c;
    _write1 = AHid_Write(_pipe1, buffer, _repSize1, &written);
    On_DataReceived();
    QThread::msleep(10);
    buffer[4] = 4;
    buffer[5] = 0x20;
    _write1 = AHid_Write(_pipe1, buffer, _repSize1, &written);
    On_DataReceived();
    QThread::msleep(10);
    buffer[4] = 8;
    buffer[5] = 0x10;
    _write1 = AHid_Write(_pipe1, buffer, _repSize1, &written);
    On_DataReceived();
    QThread::msleep(10);
    buffer[4] = 4;
    buffer[5] = 0x10;
    _write1 = AHid_Write(_pipe1, buffer, _repSize1, &written);
    On_DataReceived();
    QThread::msleep(10);
    buffer[4] = 5;
    buffer[5] = 0x10;
    _write1 = AHid_Write(_pipe1, buffer, _repSize1, &written);
    On_DataReceived();
    QThread::msleep(10);
    buffer[4] = 6;
    buffer[5] = 0x10;
    _write1 = AHid_Write(_pipe1, buffer, _repSize1, &written);
    On_DataReceived();
    QThread::msleep(10);
    buffer[4] = 7;
    buffer[5] = 0x10;
    _write1 = AHid_Write(_pipe1, buffer, _repSize1, &written);
    On_DataReceived();
    QThread::msleep(10);
    buffer[4] = 3;
    buffer[5] = 0x10;
    _write1 = AHid_Write(_pipe1, buffer, _repSize1, &written);
    On_DataReceived();
    QThread::msleep(10);
    buffer[4] = 3;
    buffer[5] = 0x1a;
    _write1 = AHid_Write(_pipe1, buffer, _repSize1, &written);
    On_DataReceived();
    QThread::msleep(10);
    buffer[4] = 5;
    buffer[5] = 0x20;
    _write1 = AHid_Write(_pipe1,buffer,_repSize1,&written);
    On_DataReceived();
    QThread::msleep(10);
    buffer[4] = 6;
    buffer[5] = 0x20;
    _write1 = AHid_Write(_pipe1,buffer,_repSize1,&written);
    On_DataReceived();
    QThread::msleep(10);
    buffer[4] = 8;
    buffer[5] = 0x20;
    _write1 = AHid_Write(_pipe1,buffer,_repSize1,&written);
    On_DataReceived();
    QThread::msleep(10);
    buffer[4] = 2;
    buffer[5] = 0x12;
    _write1 = AHid_Write(_pipe1,buffer,_repSize1,&written);
    On_DataReceived();
    QThread::msleep(10);
    buffer[4] = 5;
    buffer[5] = 0x1a;
    _write1 = AHid_Write(_pipe1,buffer,_repSize1,&written);
    On_DataReceived();
    QThread::msleep(10);
}

void MainWindow::On_DataReceived()
{
    unsigned char buffer[0x40] = {0};
    unsigned int read = 0;
    if(AHid_Read(_pipe2, buffer, _repSize1, &read) == 0)
    {
        QString item = " ";
        for (unsigned int i = 0; i <_repSize1; i++)
        {
            QString str2 = QString::number(buffer[i],16).rightJustified(2, '0');
            item = item + " " + str2 + " ";
        }

        ui->Text_Readbuffer->setText(item);
        ui->Text_Readbuffer->selectAll();
        _inputCount2++;

        if((buffer[4] == 1) && (buffer[5] == 0x10))
        {
            QByteArray array;
            array = QByteArray(reinterpret_cast<char*>(buffer), 7);
            bool flagarray[7];
            for (int i = 0; i<array.count(); i++)
            {
                flagarray[i] = array[i];
            }
            ui->checkBox_InternalInitialization->setChecked(flagarray[0]);
            ui->checkBox_LEDTempOK->setChecked(flagarray[1]); //incompatibleDMD
            ui->checkBox_DMDTempOK->setChecked(flagarray[2]); //DMDResetOk
            ui->checkBox_BoardTempOK->setChecked(flagarray[2]); //forcedswaperror
            ui->checkBox_HardwareOK->setChecked(flagarray[4]); //slave controller present
            ui->checkBox_IntensityCalOK->setChecked(flagarray[5]); //SequencerAbortStatus
            ui->checkBox_IntensityModInstall->setChecked(flagarray[6]);
        }
        if((buffer[4] == 1) && (buffer[5] == 0x1c))
        {
            double num4 = 0.0;
            double num5 = 0.0;
            double num6 = 0.0;
            num6 = ((double)((buffer[6] << 8) | buffer[7])) / 10.0;
            num5 = ((double)((buffer[8] << 8) | buffer[9])) / 10.0;
            num4 = ((double)((buffer[10] << 8) | buffer[11])) / 10.0;
            QString str1 = QString::number(num6);
            QString str2 = QString::number(num5);
            QString str3 = QString::number(num4);
            ui->BoardTemp_text->setText(str1);
            ui->DMDTemp_text->setText(str2);
            ui->LEDTemp_text->setText(str3);
        }
        if((buffer[4] == 1) && (buffer[5] == 0x1b))
        {
            int num7 = (buffer[6] << 8) | buffer[7];
            int num8 = (buffer[8] << 8) | buffer[9];
            int num9 = (buffer[10] << 8) | buffer[11];
            QString str1 = QString::number(num7);
            QString str2 = QString::number(num8);
            QString str3 = QString::number(num9);
            ui->PCBFanSpeed_text->setText(str1);
            ui->DMDFanSpeed_text->setText(str2);
            ui->LEDFanSpeed_text->setText(str3);
        }
        if((buffer[4] == 2) && (buffer[5] == 0x1c))
        {
            double num10 = 0.0;
            int num11 = 0;
            num10 = ((double) ((buffer[6] << 8) | buffer[7])) / 100.0;
            num11 = (buffer[8] << 8) | buffer[9];
            QString str1 = QString::number(num10);
            QString str2 = QString::number(num11);
            ui->LEDVoltage_text->setText(str1);
            ui->LEDCurrent_text->setText(str2);
        }
        if((buffer[4] == 4) && (buffer[5] == 0x20))
        {
            int num12 = ((buffer[6] << 8) | buffer[7]);
            QString str = QString::number(num12);
            ui->IntensityVoltage_text->setText(str);
        }
        if((buffer[4] == 8) && (buffer[5] == 0x10))
        {
            int num13;
            QString str3;
            for (int i = 6; i<= 11; i++)
            {
                str3.append(buffer[i]);
            }
            for ( num13 = 12; num13< 0x10; num13++)
            {
                QString str4 = QString::number(buffer[num13], 10).rightJustified(2, '0');
                str3 = str3.append(str4);
            }
            ui->LESerial_text->setText(str3);
            str3 = QString::number(buffer[0x10], 16);
            for (num13 = 0x11; num13 < 0x16; num13++)
            {
                QString str6 = QString::number(buffer[num13], 16).rightJustified(2, '0');
                str3 = str3.append(str6);
            }
            ui->LEDSerial_text->setText(str3);
        }
        if((buffer[4] == 4) && (buffer[5] == 0x10))
        {
            double LED = ((double) ((buffer[6] << 8) | (buffer[7]))) / 10.0;
            QString str = QString::number(LED);
            ui->LEDTempMax_text->setText(str);
        }
        if((buffer[4] == 5) && (buffer[5] == 0x10))
        {
            double DMD = ((double) ((buffer[6] << 8) | (buffer[7]))) / 10.0;
            QString str = QString::number(DMD);
            ui->DMDTempMax_text->setText(str);
        }
        if((buffer[4] == 6) && (buffer[5] == 0x10))
        {
            double Board = ((double) ((buffer[6] << 8) | (buffer[7]))) / 10.0;
            QString str = QString::number(Board);
            ui->BoardTempMax_text->setText(str);
        }
        if((buffer[4] == 7) && (buffer[5] == 0x10))
        {
            double LEDCurrent = ((double) ((buffer[6] << 8) | (buffer[7])));
            QString str = QString::number(LEDCurrent);
            ui->LEDCurrentMax_text->setText(str);
        }
        if((buffer[4] == 3) && (buffer[5] == 0x10))
        {
            QByteArray array;
            array = QByteArray(reinterpret_cast<char*>(buffer), 6);
            bool flagarray[6];
            for (int i = 0; i<array.count(); i++)
            {
                flagarray[i] = array[i];
            }
            bool flag8 = flagarray[0];
            ui->checkBox_WriteProtection->setChecked(flag8);
        }
        if((buffer[4] == 3) && (buffer[5] == 0x1a))
        {
            int intensity = ((((buffer[6] << 0x18) | (buffer[7] << 0x10)) | (buffer[8] << 8)) | buffer[9]);
            QString str = QString::number(intensity);
            ui->Intensity_text->setText(str);
        }
        if((buffer[4] == 5) && (buffer[5] == 0x20))
        {
            QByteArray *arr = new QByteArray();
            arr->append(buffer[9]);
            arr->append(buffer[8]);
            arr->append(buffer[7]);
            arr->append(buffer[6]);
            float value =  *(reinterpret_cast<const float*>(arr->constData()));

            QString IntGain = QString::number(value);
            ui->IntensityGain_text->setText(IntGain);

        }
        if((buffer[4] == 6) && (buffer[5] == 0x20))
        {
            QByteArray *arr = new QByteArray();
            arr->append(buffer[9]);
            arr->append(buffer[8]);
            arr->append(buffer[7]);
            arr->append(buffer[6]);
            float value =  *(reinterpret_cast<const float*>(arr->constData()));

            QString IntOff = QString::number(value);
            ui->Intensity_offset_text->setText(IntOff);
        }
        if((buffer[4] == 8) && (buffer[5] == 0x20))
        {
            QByteArray *arr = new QByteArray();
            arr->append(buffer[9]);
            arr->append(buffer[8]);
            arr->append(buffer[7]);
            arr->append(buffer[6]);
            quint32 value =  *(reinterpret_cast<const quint32*>(arr->constData()));

            QString Cycletime = QString::number(value);
            ui->CycleTime_Text->setText(Cycletime);

        }
        if((buffer[4] == 5) && (buffer[5] == 0x1a))
        {
            if(buffer[6] == 1)
            {
                ui->checkBox_IntensityRegEnable->setChecked(true);
                ui->pushButton_EnableIntensityReg->setText("Disable Intensity Regulation");
            }
            else
            {
                ui->checkBox_IntensityRegEnable->setChecked(false);
                ui->pushButton_EnableIntensityReg->setText("Enable Intensity Regulation");
            }
        }
    }
}

