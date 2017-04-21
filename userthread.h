#ifndef USERTHREAD_H
#define USERTHREAD_H

#include "QThread"
#include "QMutex"
#include "QWaitCondition"

class userThread : public QThread
{
public:
    userThread(QObject *r, QMutex *m, QWaitCondition *c);

    QObject *receiver;

    void run();
};

#endif // USERTHREAD_H
