#ifndef MYEVNET_H
#define MYEVNET_H

#include "QEvent"

const QEvent::Type CustomEvent_Login = (QEvent::Type)5001;

class myEvnet : public QEvent
{
public:

    myEvnet(QObject *r) : QEvent(CustomEvent_Login){
        receiver = r;
    }

    void sendMyEvent();
    QObject *receiver;
};

#endif // MYEVNET_H
