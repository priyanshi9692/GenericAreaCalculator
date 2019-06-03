#ifndef CIRCLE_H
#define CIRCLE_H
#include"Shape.h"
#include"XYPoint.h"
using namespace std;
class Circle: public Shape
{
    public:
    double area();
    Circle();
    Circle (XYPoint &point, double R1);
    private:
    double R;
    XYPoint A;
};

#endif