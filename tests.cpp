#include <QtTest/QTest>

class TestQtFinances: public QObject
{
    Q_OBJECT

private slots:
    void testAccount();
};

void TestQtFinances::testAccount()
{
    char a[10];
    a[10] = 0;
    QVERIFY(true);
}

QTEST_MAIN(TestQtFinances)
#include "tests.moc"
