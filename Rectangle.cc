#include"Rectangle.h"
#include<iostream>
using namespace std;
Rectangle:: Rectangle(XYPoint &A1, XYPoint &B1, XYPoint &C1, XYPoint &D1)
{
    A=A1;
    B=B1;
    C=C1;
    D=D1;
}
double Rectangle :: area()
{
    double s1,s2,s3,s4;
    double areaRect=0;
    if(B.getX()-A.getX() == 0){
        s1 = INFINITY;
    } else {
    s1=(B.getY()-A.getY())/(B.getX()-A.getX());
    }
    if(C.getX()-B.getX() == 0){
        s2 = INFINITY;
    } else {
    s2=(C.getY()-B.getY())/(C.getX()-B.getX());
    }
    if(D.getX()-C.getX() == 0){
        s3 = INFINITY;
    } else{
    s3=(D.getY()-C.getY())/(D.getX()-C.getX());
    }

    if(D.getX()-A.getX()){
        s4 = INFINITY;
    } else{
    s4=(D.getY()-A.getY())/(D.getX()-A.getX());
    }
if((s1*s2==-1) || (s3*s4==-1) || (s1*s3==-1) || (s2*s4==-1) || (s2==s4 && s1==s3) ||(s1==s2 && s3==s4))
        {
          double l1, l2, b1, b2;
          l1=sqrt((pow((A.getX()-B.getX()),2))+pow((A.getY()-B.getY()),2));
          l2=sqrt((pow((B.getX()-C.getX()),2))+pow((B.getY()-C.getY()),2));
          b1=sqrt((pow((C.getX()-D.getX()),2))+pow((C.getY()-D.getY()),2));
          b2=sqrt((pow((D.getX()-A.getX()),2))+pow((D.getY()-A.getY()),2));
          if((l1==l2 || b1==b2) || (l1==b1 || l2==b2))
          {
              areaRect=l1*b2;
          }
          return areaRect;
        }
    else{
            cerr<<"Locus of points can not form Rectangle"<<"\n";
            exit(0);
        }
        

} 
