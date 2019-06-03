#include"ShapeSorter.h"
#include"Rectangle.h"
#include"Triangle.h"
#include"Circle.h"
#include"Shape.h"
#include"XYPoint.h"
#include<iostream>
using namespace std;
void ShapeSorter(vector <Shape *> &shapes)
{
    int n = shapes.size();
      for (int i = 0; i < n-1 ; i++)
      {
         for (int j = 0; j < n-i-1 ; j++)
         {
            if (shapes[j]->area() > shapes[j + 1]->area())
            {
               swap(shapes[j], shapes[j+1]);
            }
         }
      }

      for (int i = 0; i < n; i++)
      {
         cout << shapes[i]->area() << endl;
      }
}


