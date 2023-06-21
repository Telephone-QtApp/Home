#ifndef SYSTEMSETTINGINTERFACE_H
#define SYSTEMSETTINGINTERFACE_H

#include <SystemSetting/SystemSettingService.h>
#include "AbstractInterface.h"

class SystemSettingInterface : public AbstractInterface {
public:
    static SystemSettingInterface* instance();

    void connectEvent();

    void disconnectEvent();

    bool doConnect() override;

    bool doDisconnect() override;
private:
    SystemSettingInterface();
    ~SystemSettingInterface();

    SystemSettingService* m_systemSetting;
};

#endif // SYSTEMSETTINGINTERFACE_H
