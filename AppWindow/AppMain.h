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
    Q_PROPERTY(int currentView READ currentView WRITE setCurrentView NOTIFY currentViewChanged)

public:
    static AppMain *getInstance();
    void createView();
    void initAppMain();

    int currentView() const;

public slots:
    void setCurrentView(int newCurrentView);

signals:
    void createWindow();
    void currentViewChanged();

private:
    explicit AppMain(QObject *parent = nullptr);
    ~AppMain();

private:
    int m_currentView;
    AppWindow* m_appWindow {nullptr};
    QQuickView* m_view {nullptr};
};

#endif // APPMAIN_H
