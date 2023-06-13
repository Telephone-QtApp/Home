#include "HomeController.h"

HomeController::HomeController()
{
    m_sysSetting = SystemSettingInterface::instance();
    m_smartPhone = SmartPhoneInterface::instance();
    m_appModel = new AppModel();

    m_appModel->beginResetModel();
    m_appModel->appendItem(new DataItem("qrc:/Assets/phone.png", "Phone", "small"));
    m_appModel->appendItem(new DataItem("qrc:/Assets/setting.png", "Setting", "small"));
    m_appModel->appendItem(new DataItem("qrc:/Assets/facetime.png", "Facetime", "medium"));
    m_appModel->appendItem(new DataItem("qrc:/Assets/gallery.jpg", "Gallery", "medium"));
    m_appModel->appendItem(new DataItem("qrc:/Assets/message.png", "Message", "medium"));
    m_appModel->appendItem(new DataItem("qrc:/Assets/safari.png", "Safari", "small"));
    m_appModel->endResetModel();
}

HomeController::~HomeController()
{
    if (m_appModel != nullptr)
    {
        delete m_appModel;
    }
}

void HomeController::initHomeController()
{

}
