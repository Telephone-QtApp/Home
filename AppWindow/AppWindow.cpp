#include "AppWindow.h"

AppWindow *AppWindow::getInstance()
{
    static AppWindow * ins = new AppWindow;
    return ins;
}

void AppWindow::onCreateWindow(QQuickView *view)
{
    if (nullptr == view)
        return;

    const QUrl url(u"qrc:/Home/main.qml"_qs);
//    view->resize(133, 133);  // Thiết lập kích thước mong muốn
    view->setWidth(300);
    view->setHeight(300);
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
