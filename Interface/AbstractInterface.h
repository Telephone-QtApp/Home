#ifndef ABSTRACTINTERFACE_H
#define ABSTRACTINTERFACE_H

#include <QVector>
#include <shared_mutex>
#include <mutex>

class AbstractInterface {
public:
    AbstractInterface();
    ~AbstractInterface();

    enum class AbstractState {
        State_Disconnected,
        State_WaitConnected,
        State_Ready
    };

    virtual bool connect();
    virtual bool disconnect();

    virtual bool doConnect();
    virtual bool doDisconnect();
    virtual void doConnectedEvent();
    virtual void doDisconnectedEvent();

protected:
    AbstractState m_state;
    std::shared_mutex m_mutex;
};

#endif // ABSTRACTINTERFACE_H
