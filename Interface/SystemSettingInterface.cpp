#include "SystemSettingInterface.h"

SystemSettingInterface::SystemSettingInterface()
{
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
    // call API to connect service
}

bool SystemSettingInterface::doDisconnect()
{
    // call API to disconnect service
    delete this;
}
