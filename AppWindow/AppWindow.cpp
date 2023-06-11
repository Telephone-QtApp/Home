#include "AppWindow.h"

AppWindow *AppWindow::getInstance()
{
    static AppWindow * ins = new AppWindow;
    return ins;
}

void AppWindow::createWindow(QQuickView *view)
{
    if (nullptr == view)
        return;

    const QUrl url(u"qrc:/Home/Component/main.qml"_qs);
    view->setWidth(700);
    view->setHeight(1100);
    view->setSource(url);
    view->show();
}

AppWindow::AppWindow()
{
}

AppWindow::~AppWindow()
{
    m_view = nullptr;
}
