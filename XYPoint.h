#ifndef XYPoint_H
#define XYPoint_H
#include<iostream>
#include<cmath>
using namespace std;
class XYPoint {
public:
XYPoint();
//Default Constructor
XYPoint(double x1, double y1);
//Parameterized Constructor
void setXY(double x1, double y1);
//Function to set values of points
//Postcondition x=x1, y=y1
double getX();
//Function to get the value X
double getY();
//Function to get the value X
double SQR(double x, double y);
//Function to calculate distance of points from origin
bool operator > (XYPoint &point);
//Overloading > Operator
bool operator < (XYPoint &point);
//Overloading < Operator
bool operator <= (XYPoint &point);
//Overloading <= Operator
bool operator == (XYPoint &point);
//Overloading == Operator
bool operator >= ( XYPoint &point);
//Overloading >= Operator
    private:
    double x,y;
};
#endif