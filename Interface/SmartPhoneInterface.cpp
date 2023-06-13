#include "SmartPhoneInterface.h"

SmartPhoneInterface::SmartPhoneInterface()
{
    m_services.push_back(this);
}

SmartPhoneInterface::~SmartPhoneInterface()
{

}

SmartPhoneInterface *SmartPhoneInterface::instance()
{
    static SmartPhoneInterface* ins = new SmartPhoneInterface();
    return ins;
}
