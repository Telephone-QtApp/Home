#ifndef SYSTEMSETTINGINTERFACE_H
#define SYSTEMSETTINGINTERFACE_H

#include "AbstractInterface.h"

class SystemSettingInterface : public AbstractInterface {
public:
    static SystemSettingInterface* instance();

    bool doConnect() override;

    bool doDisconnect() override;
private:
    SystemSettingInterface();
    ~SystemSettingInterface();
};

#endif // SYSTEMSETTINGINTERFACE_H
