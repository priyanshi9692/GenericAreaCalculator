#ifndef TRIANGLE_H
#define TRIANGLE_H
#include"Shape.h"
#include"XYPoint.h"
using namespace std;
class Triangle: public Shape
{
    public:
    Triangle(XYPoint &A1, XYPoint &B1, XYPoint &C1);
    double area();
    private:
    XYPoint A, B, C;
};
#endif

