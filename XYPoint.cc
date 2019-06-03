//Programming Assignment 3
//Submitted to Dr Juan Gomez
//Submitted by Priyanshi Jajoo
//Grade ID: 27.2
//Student ID: 013826618
#include"XYPoint.h"
#include<iostream>
using namespace std;
XYPoint:: XYPoint()
{
    x= 0;
    y=0;
}
XYPoint:: XYPoint(double x1, double y1)
{
    x=x1;
    y=y1;
}
void XYPoint:: setXY(double x1, double y1){
x =x1;
y =y1;
}

double XYPoint:: getX(){
    return x;
}

double XYPoint:: getY(){
    return y;
}

double XYPoint:: SQR(double x, double y)  {
    double D = sqrt(pow(x,2)+pow(y,2));
    return D;
}

bool XYPoint::operator > (XYPoint &point)
{
  double d1= SQR(x,y);
  double d2= SQR(point.x,point.y);
    
    if(d1>d2)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

bool XYPoint::operator < (XYPoint &point)
{
  double d1= SQR(x,y);
  double d2= SQR(point.x,point.y);
    
    if(d1<d2)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
bool XYPoint::operator <= (XYPoint &point)
{
  double d1= SQR(x,y);
  double d2= SQR(point.x,point.y);
    
    if(d1<=d2)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

bool XYPoint::operator == (XYPoint &point)
{
  double d1= XYPoint::SQR(x,y);
  double d2= XYPoint::SQR(point.x,point.y);
   
    if(d1==d2)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

bool XYPoint::operator >= ( XYPoint &point)
{
  double d1= SQR(x,y);
  double d2= SQR(point.x,point.y);
    
    if(d1>=d2)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

