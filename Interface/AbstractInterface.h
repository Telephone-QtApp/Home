#ifndef ABSTRACTINTERFACE_H
#define ABSTRACTINTERFACE_H

#include <QVector>

class AbstractInterface {
public:
    AbstractInterface();
    ~AbstractInterface();

protected:
    QVector<AbstractInterface*> m_services;
};

#endif // ABSTRACTINTERFACE_H

