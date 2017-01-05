//
// Created by ssharma on 05/01/17.
//
#include <QTcpSocket>
#include <QHostAddress>
#ifndef EXNIHILO_RECEIVE_H
#define EXNIHILO_RECEIVE_H


class receive : public QObject {
Q_OBJECT
public:
    receive();
    QString last_message;

private:
    QTcpSocket* listener;
    //Functions
slots
    void message();
};

#endif //EXNIHILO_RECEIVE_H
