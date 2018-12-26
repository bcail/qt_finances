#include <QtTest/QTest>
#include "qt_finances.h"

class TestQtFinances: public QObject
{
    Q_OBJECT

private slots:
    void testAccount();
};

void TestQtFinances::testAccount()
{
    Account a("Checking");
    QVERIFY(a.getName() == "Checking");
}

QTEST_MAIN(TestQtFinances)
#include "tests.moc"
