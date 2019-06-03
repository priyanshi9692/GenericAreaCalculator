#ifndef RECTANGLE_H
#define RECTANGLE_H
#include"Shape.h"
#include"XYPoint.h"
class Rectangle : public Shape
{
    public:
    Rectangle(XYPoint &A1, XYPoint &B1, XYPoint &C1, XYPoint &D1);
    double area();
    int distanceSqr(XYPoint &A, XYPoint &B);
    private:
    XYPoint A, B, C, D;
};

#endif