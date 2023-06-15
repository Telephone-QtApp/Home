#ifndef APPMODEL_H
#define APPMODEL_H

#include <QAbstractListModel>
#include <QVariant>
#include <QVector>

struct DataItem {
    DataItem(QString img, QString name, QString type) : m_img(img), m_name(name), m_type(type) {}
    QString m_img;
    QString m_name;
    QString m_type;
};

class AppModel : public QAbstractListModel {
//    Q_OBJECT
public:
    AppModel(QObject* parent = nullptr);
    ~AppModel();

    int rowCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role) const override;
    QHash<int, QByteArray> roleNames() const override;

    void beginResetModel();
    void endResetModel();

    void appendItem(DataItem* item);

private:
    enum AppRole {
        Role_Img,
        Role_Name,
        Role_Type
    };

    QVector<DataItem*> m_appList;
};

#endif // APPMODEL_H
