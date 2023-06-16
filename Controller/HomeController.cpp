#include "HomeController.h"

HomeController::HomeController()
{
    m_sysSetting = SystemSettingInterface::instance();
    m_interfaces.push_back(m_sysSetting);
    m_smartPhone = SmartPhoneInterface::instance();
    m_interfaces.push_back(m_smartPhone);
    m_appModel = new AppModel();
}

HomeController::~HomeController()
{
    if (m_appModel != nullptr)
    {
        delete m_appModel;
    }

    for (auto& interface : m_interfaces) {
        interface->disconnect();
    }

    m_interfaces.clear();
}

void HomeController::initHomeController()
{
    QVector<DataItem*> appList;
    appList.push_back(new DataItem("qrc:/Assets/phone.png", "Phone", "small"));
    appList.push_back(new DataItem("qrc:/Assets/setting.png", "Setting", "small"));
    appList.push_back(new DataItem("qrc:/Assets/facetime.png", "Facetime", "medium"));
    appList.push_back(new DataItem("qrc:/Assets/gallery.jpg", "Gallery", "medium"));
    appList.push_back(new DataItem("qrc:/Assets/message.png", "Message", "medium"));
    appList.push_back(new DataItem("qrc:/Assets/safari.png", "Safari", "small"));
    m_appModel->appendItem(appList);

    for (auto interface : m_interfaces) {
        interface->connect();
    }
}
