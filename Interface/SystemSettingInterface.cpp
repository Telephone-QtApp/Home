#include "SystemSettingInterface.h"

SystemSettingInterface::SystemSettingInterface()
{
    m_services.push_back(this);
}

SystemSettingInterface::~SystemSettingInterface()
{

}

SystemSettingInterface *SystemSettingInterface::instance()
{
    static SystemSettingInterface* ins = new SystemSettingInterface();
    return ins;
}
