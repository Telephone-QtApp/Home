#include "AppModel.h"
#include <QDebug>

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
    qWarning() << "data";
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
    case Role_Type:
        result = m_appList.at(index.row())->m_type;
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
    roles[Role_Type] = "type";
    return roles;
}

void AppModel::beginResetModel()
{
    QAbstractListModel::beginResetModel();
}

void AppModel::endResetModel()
{
    QAbstractListModel::endResetModel();
}

void AppModel::appendItem(DataItem *item)
{
    if (item == nullptr)
        return;

    m_appList.push_back(item);
    qWarning() << "append " << m_appList.size();
}
