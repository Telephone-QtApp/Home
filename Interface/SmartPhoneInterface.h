#ifndef SMARTPHONEINTERFACE_H
#define SMARTPHONEINTERFACE_H

#include <SmartPhone/SmartPhoneService.h>
#include <AbstractInterface/AbstractInterface.h>

class SmartPhoneInterface : public AbstractInterface {
public:
    static SmartPhoneInterface* instance();

    void connectEvent();

    void disconnectEvent();

    bool doConnect() override;

    bool doDisconnect() override;

private:
    SmartPhoneInterface();
    ~SmartPhoneInterface();

    SmartPhoneService* m_smartPhone;
};

#endif // SMARTPHONEINTERFACE_H
