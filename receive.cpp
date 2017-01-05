//
// Created by ssharma on 05/01/17.
//

#include "receive.h"
#include <QObject>

receive::receive() {
    listener = new QTcpSocket();
    listener->bind(QHostAddress("localhost"), 11562);
    last_message = "";
    QObject::connect(listener, listener->bytesAvailable, this, this->message);
}

void receive::message() {
    qDebug() << "Received message: \n";
    QString string = listener->readAll();
    qDebug() << string;
    last_message = string;
}