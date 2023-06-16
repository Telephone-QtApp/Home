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
    // call API to connect service
}

bool SmartPhoneInterface::doDisconnect()
{
    // call API to disconnect service
    delete this;
}
