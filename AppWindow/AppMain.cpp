#include "AppMain.h"
#include <QDebug>

AppMain::AppMain(QObject *parent) : QObject(parent)
{

}

AppMain::~AppMain()
{

}

int AppMain::currentView() const
{
    return m_currentView;
}

void AppMain::setCurrentView(int newCurrentView)
{
    if (m_currentView == newCurrentView)
        return;
    m_currentView = newCurrentView;
    emit currentViewChanged();
}

AppMain *AppMain::getInstance()
{
    static AppMain* ins = new AppMain();
    return ins;
}

void AppMain::createView()
{
    m_appWindow = AppWindow::getInstance();
    if (nullptr == m_view) {
        m_view = new QQuickView();
    }
    qmlRegisterType<Enums>("Enums", 1, 0, "Enums");

    if (m_view == nullptr)
        return;

    m_view->rootContext()->setContextProperty("myAppMain", this);

    m_appWindow->onCreateWindow(m_view);
}

void AppMain::initAppMain()
{
    qDebug() << "init AppMain";
    createView();
}
