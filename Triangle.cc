#include"Triangle.h"
#include<iostream>
using namespace std;
Triangle:: Triangle(XYPoint &A1, XYPoint &B1, XYPoint &C1)
{
    A=A1;
    B=B1;
    C=C1;
}
double Triangle :: area()
{
    double a, b, c;
    unsigned int s1,s2,s3;
    s1=(B.getY()-A.getY())/(B.getX()-A.getX());
    s2=(C.getY()-B.getY())/(C.getX()-B.getX());
    s3=(C.getY()-A.getY())/(C.getX()-A.getX());
    
    if(s1==s2 && s2==s3 && s1==s3)
    {
        cerr<<"Points are collinear, can not form triangle."<<"\n";
        return 0;
    }
    else
    {
        a=sqrt((pow((B.getX()-C.getX()),2))+pow((B.getY()-C.getY()),2));
        b=sqrt((pow((A.getX()-C.getX()),2))+pow((A.getY()-C.getY()),2));
        c=sqrt((pow((A.getX()-B.getX()),2))+pow((A.getY()-B.getY()),2));
        if(a+b>c || b+c>a || a+c>b)
        {
            double s=(a+b+c)/2;
            double tArea=sqrt((s*(s-a)*(s-b)*(s-c)));
            return tArea;
        }
        else
        {
            cerr<<"Locus of points can not form Triangle."<<"\n";
            exit(0);
        }
        
    }
}

