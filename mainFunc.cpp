#include<iostream>
#include"Rectangle.h"
using namespace std;
int main(){
    XYPoint A(0,0), B(3,0), C(3,2), D(0,2);
    Rectangle rect(A, B, C, D);
    cout<<"Area of Rectangle: "<<rect.area();
    cout<<"\n";

    return 0;
}