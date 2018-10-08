#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <Qsplashscreen>
#include <QTimer>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplashScreen *splash = new QSplashScreen();
    splash->setPixmap(QPixmap(":/Images/images/jgr.jpg"));
    splash->show();

    MainWindow w;

    if (!w.loadDll())
    {
        QMessageBox msgBox;

        msgBox.setText("Error!!!AHid.Dll does not found!!");
        msgBox.exec();

        a.quit();

        return 0;
    }

    QTimer::singleShot(2500,splash,SLOT(close()));
    QTimer::singleShot(2500,&w,SLOT(show()));

    w.AHid_Init();
    //w.show();

    return a.exec();
}
