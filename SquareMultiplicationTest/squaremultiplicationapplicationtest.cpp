#include "squaremultiplicationapplicationtest.h"

SquareMultiplicationApplicationTest::SquareMultiplicationApplicationTest(QObject *parent) : QObject(parent)
{

}

void SquareMultiplicationApplicationTest::mySquareMultiplicationTest()
{
    SquareMultiplication object(3,4);
    int result=object.getResult();


    QVERIFY2(result=144,"Multiplication Answer is Not Correct");

}
