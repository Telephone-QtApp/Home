#ifndef APPMAIN_H
#define APPMAIN_H

#include <QObject>
#include <QQuickView>
#include <QQmlContext>
#include <memory>
#include "AppWindow.h"
#include "Controller/HomeController.h"

class AppMain : public QObject
{
    Q_OBJECT

public:
    static AppMain *instance();
    bool createWindow();
    void initAppMain();
    void registerContextProperty();
    void registerEnumType();

private:
    explicit AppMain(QObject *parent = nullptr);
    ~AppMain();

private:
    std::shared_ptr<AppWindow> m_appWindow;
    std::shared_ptr<HomeController> m_controller;
    QQuickView* m_view {nullptr};
};

#endif // APPMAIN_H
