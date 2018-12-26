#ifndef QTFINANCES_H
#define QTFINANCES_H

#include <QtCore/QString>

class Account
{
public:
    Account(QString name);
    QString getName();
    
private:
    QString m_name;
};

#endif
