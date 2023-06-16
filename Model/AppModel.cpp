#include "AppModel.h"

AppModel::AppModel(QObject* parent) : QAbstractListModel(parent)
{
}

AppModel::~AppModel()
{
    m_appList.clear();
}

int AppModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_appList.size();
}

QVariant AppModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant{};

    if (index.row() >= m_appList.size() || index.row() < 0)
        return QVariant{};

    QVariant result;
    switch(role) {
    case Role_Img:
        result = m_appList.at(index.row())->m_img;
        break;
    case Role_Name:
        result = m_appList.at(index.row())->m_name;
        break;
    default:
        break;
    }

    return result;
}

QHash<int, QByteArray> AppModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[Role_Img] = "image";
    roles[Role_Name] = "name";
    return roles;
}

void AppModel::appendItem(QVector<DataItem*>& appList)
{
    if (m_appList.size() > 0)
        m_appList.clear();

    beginResetModel();
    m_appList = appList;
    endResetModel();
}
