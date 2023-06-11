#ifndef APPMAIN_H
#define APPMAIN_H

#include <QObject>
#include <QQuickView>
#include <QDebug>
#include <QQmlContext>
#include "AppWindow.h"
#include "Common/Enums.h"

class AppMain : public QObject
{
    Q_OBJECT

public:
    static AppMain *getInstance();
    void createView();
    void initAppMain();

private:
    explicit AppMain(QObject *parent = nullptr);
    ~AppMain();

private:
    AppWindow* m_appWindow {nullptr};
    QQuickView* m_view {nullptr};
};

#endif // APPMAIN_H
