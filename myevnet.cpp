#include "myevnet.h"
#include <QApplication>


void myEvnet::sendMyEvent()
{
    QApplication::postEvent(receiver, new QEvent(CustomEvent_Login));
}
