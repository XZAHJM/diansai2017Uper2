#ifndef PORT_H
#define PORT_H

#include <QObject>
#include <QWidget>

class port : public QSerialPort
{
public:
    port();
};

#endif // PORT_H