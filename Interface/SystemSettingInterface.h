#ifndef SYSTEMSETTINGINTERFACE_H
#define SYSTEMSETTINGINTERFACE_H

#include "AbstractInterface.h"

class SystemSettingInterface : public AbstractInterface {
public:
    static SystemSettingInterface* instance();
private:
    SystemSettingInterface();
    ~SystemSettingInterface();
};

#endif // SYSTEMSETTINGINTERFACE_H
