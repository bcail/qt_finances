#include <QtTest/QTest>

class TestQtFinances: public QObject
{
    Q_OBJECT

private slots:
    void testAccount();
};

void TestQtFinances::testAccount()
{
    QVERIFY(true);
}

QTEST_MAIN(TestQtFinances)
#include "tests.moc"
