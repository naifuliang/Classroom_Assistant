#ifndef MD5_H
#define MD5_H

#include <QObject>

class md5 : public QObject
{
    Q_OBJECT
public:
    explicit md5(QObject *parent = nullptr);

signals:

};

#endif // MD5_H
