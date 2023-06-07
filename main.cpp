#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "AppWindow/AppMain.h"


int main(int argc, char *argv[])
{
    qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));

    QGuiApplication app(argc, argv);
    AppMain *appmain = AppMain::getInstance();
    appmain->initAppMain();

    return app.exec();
}
