#ifndef SQUAREMULTIPLICATION_H
#define SQUAREMULTIPLICATION_H

#include <QObject>

class SquareMultiplication
{
public:
    SquareMultiplication(int a=0, int b=0);
    void setValues(int a, int b);
    int getResult();

private:
    int Ma;
    int Mb;
};



#endif // SQUAREMULTIPLICATION_H
