#ifndef HOMECONTROLLER_H
#define HOMECONTROLLER_H

#include <QObject>
#include <memory>
#include "Interface/SystemSettingInterface.h"
#include "Interface/SmartPhoneInterface.h"
#include "Model/AppModel.h"

class HomeController : public QObject {
    Q_OBJECT
public:
    HomeController();
    ~HomeController();

    void initHomeController();
    AppModel* getAppModelIns()
    {
        return m_appModel;
    }

private:
    SystemSettingInterface* m_sysSetting {nullptr};
    SmartPhoneInterface* m_smartPhone {nullptr};
    AppModel* m_appModel {nullptr};
};

#endif // HOMECONTROLLER_H
