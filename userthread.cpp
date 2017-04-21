#include "userthread.h"
#include "myevnet.h"
#include <QApplication>

userThread::userThread(QObject *r, QMutex *m, QWaitCondition *c)
{
    receiver = r;
}

void userThread::run()
{
    myEvnet *myE = new myEvnet(receiver);
//    myE->sendMyEvent();
    QApplication::postEvent(receiver, myE);
}
