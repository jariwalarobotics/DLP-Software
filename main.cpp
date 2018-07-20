#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    if (!w.loadDll())
    {
        QMessageBox msgBox;

        msgBox.setText("Error!!!AHid.Dll does not found!!");
        msgBox.exec();

        a.quit();

        return 0;
    }

    w.AHid_Init();
    w.show();

    return a.exec();
}
