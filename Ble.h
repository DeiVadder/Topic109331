#ifndef BLE_H
#define BLE_H

#include <QObject>

class Ble
{
    Q_GADGET

public:
    enum Message
    {
        Hubproperty			= 0x01,
        Hubattachedio		= 0x04,
        Hwnetworkcommand	= 0x08,
        Portinputformat		= 0x41,
        Portvalue			= 0x45
    };
    Q_ENUM(Message)
};
Q_DECLARE_METATYPE(Ble::Message)
#endif // BLE_H
