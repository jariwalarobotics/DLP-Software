#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPort>
#include <QSerialPortInfo>


void MainWindow::on_BoardConnect_clicked()
{
    QSerialPort serial;

    QString usbport = ui->SerialPort->currentText();

    if (!DeviceConnected)
    {
        DeviceConnected = true;
        ui->BoardConnect->setText("Disconnect");
        serial.setPortName(usbport);
        serial.setBaudRate(QSerialPort::Baud115200);
        serial.setDataBits(QSerialPort::Data8);
        serial.setParity(QSerialPort::NoParity);
        serial.setStopBits(QSerialPort::OneStop);
        serial.setFlowControl(QSerialPort::NoFlowControl);
        serial.open(QIODevice::ReadWrite);

        while(!serial.isOpen()) serial.open(QIODevice::ReadWrite);

        if (serial.isOpen() && serial.isWritable())
        {
            showStatus("Device is Connected!!");
        }
    }
    else
    {
        DeviceConnected = false;
        serial.close();
        ui->BoardConnect->setText("Connect");
    }
}


void MainWindow::getSerialPort()
{
    foreach(const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts())
    {
        ui->SerialPort->addItem(serialPortInfo.portName());
    }

    if (ui->SerialPort->count() != 0)
    {
        ui->BoardConnect->setEnabled(true);
        ui->SerialPort->setEnabled(true);
    }
}

