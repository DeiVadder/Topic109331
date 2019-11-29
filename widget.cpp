#include "widget.h"

#include "Ble.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    Ble::Message m(Ble::Portvalue);
    qDebug() << Q_FUNC_INFO << m;
}

Widget::~Widget()
{
}

