#include "SystemSettingInterface.h"
#include <QDebug>

SystemSettingInterface::SystemSettingInterface()
{
    m_systemSetting = SystemSettingService::instance();
    m_systemSetting->connectEvent.regCallbackFunc(std::bind(&SystemSettingInterface::connectEvent, this));
    m_systemSetting->disconnectEvent.regCallbackFunc(std::bind(&SystemSettingInterface::disconnectEvent, this));
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
}

bool SystemSettingInterface::doDisconnect()
{
    m_systemSetting->disconnectService();
    return true;
}

void SystemSettingInterface::connectEvent()
{
    qWarning() << "[SystemSettingInterface] connectEvent";
}

void SystemSettingInterface::disconnectEvent()
{
    qWarning() << "[SystemSettingInterface] disconnectEvent";
}
