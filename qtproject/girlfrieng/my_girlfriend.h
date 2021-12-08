#ifndef MY_GIRLFRIEND_H
#define MY_GIRLFRIEND_H

#include <QObject>

class My_girlfriend : public QObject
{
    Q_OBJECT
public:
    explicit My_girlfriend(QObject *parent = nullptr);

signals:

};

#endif // MY_GIRLFRIEND_H
