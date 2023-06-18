#include "SmartPhoneInterface.h"

SmartPhoneInterface::SmartPhoneInterface()
{
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
    return true;
    // call API to connect service
}

bool SmartPhoneInterface::doDisconnect()
{
    // call API to disconnect service
    return true;
}
