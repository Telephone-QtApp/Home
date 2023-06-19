#include "SystemSettingInterface.h"
#include <QDebug>

SystemSettingInterface::SystemSettingInterface()
{
    m_systemSetting = SystemSettingService::instance();
//    m_systemSetting->connectEvent.connect([&]() {
//        qWarning() << "Connect Event";
//    });
}

SystemSettingInterface::~SystemSettingInterface()
{

}

SystemSettingInterface *SystemSettingInterface::instance()
{
    static SystemSettingInterface* ins = new SystemSettingInterface();
    return ins;
}

bool SystemSettingInterface::doConnect()
{
    m_systemSetting->connectService();
    return true;
    // call API to connect service
}

bool SystemSettingInterface::doDisconnect()
{
    // call API to disconnect service
    return true;
}
