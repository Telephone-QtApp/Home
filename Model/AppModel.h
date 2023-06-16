#ifndef APPMODEL_H
#define APPMODEL_H

#include <QAbstractListModel>
#include <QVariant>
#include <QVector>

struct DataItem {
    DataItem(QString img, QString name) : m_img(img), m_name(name) {}
    QString m_img;
    QString m_name;
};

class AppModel : public QAbstractListModel {
    Q_OBJECT
public:
    AppModel(QObject* parent = nullptr);
    ~AppModel();
    int rowCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role) const override;
    QHash<int, QByteArray> roleNames() const override;

    void appendItem(QVector<DataItem*>& appList);
private:
    enum AppRole {
        Role_Img,
        Role_Name
    };

    QVector<DataItem*> m_appList;
};

#endif // APPMODEL_H
