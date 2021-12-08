#ifndef GIRL_H
#define GIRL_H

#include <QObject>

class girl : public QObject
{
    Q_OBJECT
public:
    explicit girl(QObject *parent = nullptr);

signals:

};

#endif // GIRL_H
