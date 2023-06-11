#ifndef APPWINDOW_H
#define APPWINDOW_H

#include <QObject>
#include <QQuickView>

class AppWindow : public QObject
{
    Q_OBJECT
public:
    static AppWindow* getInstance();
    void createWindow(QQuickView* view);

private:
    AppWindow();
    ~AppWindow();

    QQuickView* m_view {nullptr};
};

#endif // APPWINDOW_H
