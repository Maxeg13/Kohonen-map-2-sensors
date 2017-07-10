#ifndef SERIALQOBJ_H
#define SERIALQOBJ_H
#include "headers.h"
class serial_obj : public QObject
{
    Q_OBJECT
public:
    int readVar;
    int gottenVar[2];
    QVector<float> featureOut;
    int ptr;
    serial_obj(QString);
    ~serial_obj();
    close();
public slots:
    void doWork();
};
#endif // SERIALQOBJ_H
