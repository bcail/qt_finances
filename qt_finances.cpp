#include "qt_finances.h"

Account::Account(QString name)
{
    m_name = name;
}

QString Account::getName()
{
    return m_name;
}
