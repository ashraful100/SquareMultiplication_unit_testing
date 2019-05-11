#ifndef SQUAREMULTIPLICATIONAPPLICATIONTEST_H
#define SQUAREMULTIPLICATIONAPPLICATIONTEST_H

#include <QObject>
#include <squaremultiplication.h>
#include <QtTest/QTest>

class SquareMultiplicationApplicationTest : public QObject
{
    Q_OBJECT
public:
    explicit SquareMultiplicationApplicationTest(QObject *parent = 0);

    void mySquareMultiplicationTest();

signals:

public slots:
};

#endif // SQUAREMULTIPLICATIONAPPLICATIONTEST_H
