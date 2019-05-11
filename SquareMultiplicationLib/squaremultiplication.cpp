#include "squaremultiplication.h"

SquareMultiplication::SquareMultiplication(int a, int b):Ma(a),Mb(b)
{

}

void SquareMultiplication::setValues(int a, int b)
{
    Ma=a;
    Mb=b;
}

int SquareMultiplication::getResult()
{
    return (Ma*Mb)*(Ma*Mb);
}
