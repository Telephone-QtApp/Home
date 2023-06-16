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
    appList.push_back(new DataItem("qrc:/Assets/phone.png", "Phone"));
    appList.push_back(new DataItem("qrc:/Assets/setting.png", "Setting"));
    appList.push_back(new DataItem("qrc:/Assets/face_time.png", "Facetime"));
    appList.push_back(new DataItem("qrc:/Assets/gallery.jpg", "Gallery"));
    appList.push_back(new DataItem("qrc:/Assets/message.png", "Message"));
    appList.push_back(new DataItem("qrc:/Assets/safari.png", "Safari"));
    m_appModel->appendItem(appList);

    for (auto interface : m_interfaces) {
        interface->connect();
    }
}
