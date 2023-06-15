#ifndef SMARTPHONEINTERFACE_H
#define SMARTPHONEINTERFACE_H

#include "AbstractInterface.h"

class SmartPhoneInterface : public AbstractInterface {
public:
    static SmartPhoneInterface* instance();

    bool doConnect() override;

    bool doDisconnect() override;

private:
    SmartPhoneInterface();
    ~SmartPhoneInterface();
};

#endif // SMARTPHONEINTERFACE_H
