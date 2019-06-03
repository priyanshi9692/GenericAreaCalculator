#include "Circle.h"
#include<iostream>
using namespace std;
double Circle:: area()
{
    double circleArea= 3.14*R*R;
    return circleArea;
}
Circle:: Circle(XYPoint &point, double R1)
{
    A=point;
    R=R1;
}
