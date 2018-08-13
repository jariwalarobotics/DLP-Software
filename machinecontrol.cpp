#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPort>
#include <QSerialPortInfo>


void MainWindow::on_BoardConnect_clicked()
{

    QString usbport = ui->SerialPort->currentText();
    arduino = new QSerialPort();
    //QSerialPort serial;
    if (!DeviceConnected)
    {
        DeviceConnected = true;
        ui->BoardConnect->setText("Disconnect");
        arduino->setPortName(usbport);
        arduino->open(QIODevice::ReadWrite);
        arduino->setBaudRate(QSerialPort::Baud115200);
        arduino->setDataBits(QSerialPort::Data8);
        arduino->setParity(QSerialPort::NoParity);
        arduino->setStopBits(QSerialPort::OneStop);
        arduino->setFlowControl(QSerialPort::NoFlowControl);

        //arduino->open(QSerialPort::ReadWrite);
        if (arduino->isOpen()){
            arduino->write("M105\n");
            ui->SerialPort->setEnabled(false);
        }
    }
    else
    {
        DeviceConnected = false;
        arduino->close();
        if (!arduino->isOpen())
        {
            ui->BoardConnect->setText("Connect");
            ui->SerialPort->setEnabled(true);
        }
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
    arduino->write("G91\n");
    arduino->write(cmd.toStdString().c_str());
}

