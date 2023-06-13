#ifndef SMARTPHONEINTERFACE_H
#define SMARTPHONEINTERFACE_H

#include "AbstractInterface.h"

class SmartPhoneInterface : public AbstractInterface {
public:
    static SmartPhoneInterface* instance();
private:
    SmartPhoneInterface();
    ~SmartPhoneInterface();
};

#endif // SMARTPHONEINTERFACE_H
