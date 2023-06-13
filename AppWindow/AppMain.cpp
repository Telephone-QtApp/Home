#include "AppMain.h"
#include "Common/Enums.h"
#include <QDebug>

AppMain::AppMain(QObject *parent) : QObject(parent)
{
    m_appWindow = std::shared_ptr<AppWindow>(new AppWindow());
    m_controller = std::shared_ptr<HomeController>(new HomeController());
}

AppMain::~AppMain()
{

}

AppMain *AppMain::instance()
{
    static AppMain* ins = new AppMain();
    return ins;
}

bool AppMain::createWindow()
{
    if (nullptr == m_view) {
        m_view = new QQuickView();
    }

    if (m_view == nullptr)
        return false;

    registerContextProperty();
    registerEnumType();

    m_appWindow->createWindow(m_view);
    return true;
}

void AppMain::initAppMain()
{
    if (createWindow())
    {
        m_controller->initHomeController();
    }
}

void AppMain::registerContextProperty()
{
    m_view->rootContext()->setContextProperty("myAppMain", this);
    m_view->rootContext()->setContextProperty("homeController", m_controller.get());
}

void AppMain::registerEnumType()
{
    qmlRegisterType<Enums>("Enums", 1, 0, "Enums");
}
