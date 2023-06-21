#include "SmartPhoneInterface.h"
#include <QDebug>

SmartPhoneInterface::SmartPhoneInterface()
{
    m_smartPhone = SmartPhoneService::instance();
    m_smartPhone->connectEvent.regCallbackFunc(std::bind(&SmartPhoneInterface::connectEvent, this));
    m_smartPhone->disconnectEvent.regCallbackFunc(std::bind(&SmartPhoneInterface::disconnectEvent, this));
}

SmartPhoneInterface::~SmartPhoneInterface()
{

}

SmartPhoneInterface *SmartPhoneInterface::instance()
{
    static SmartPhoneInterface* ins = new SmartPhoneInterface();
    return ins;
}

bool SmartPhoneInterface::doConnect()
{
    m_smartPhone->connectService();
    return true;
}

bool SmartPhoneInterface::doDisconnect()
{
    m_smartPhone->disconnectService();
    return true;
}

void SmartPhoneInterface::connectEvent()
{
    qWarning() << "[SmartPhoneInterface] connectEvent";
}

void SmartPhoneInterface::disconnectEvent()
{
    qWarning() << "[SmartPhoneInterface] disconnectEvent";
}
