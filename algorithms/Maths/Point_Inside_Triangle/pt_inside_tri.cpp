#include <bits/stdc++.h>
using namespace std;
//function which returns absolute value of area of triangle using our formula
float area(int x1, int y1, int x2, int y2, int x3, int y3)
   {
   return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
   }
//function to check if our point lies inside the triangle
bool in_triangle(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y)
    {
       //Calculates area of triangle PBC
        float A1 = area (x, y, x2, y2, x3, y3);
       //Calculates area of triangle PAC
        float A2 = area (x1, y1, x, y, x3, y3);
       //Calculate area of triangle PAB
        float A3 = area (x1, y1, x2, y2, x, y);
       // Calculates area of triangle ABC
        float A = area (x1, y1, x2, y2, x3, y3);
       //Checking if equal or not
        return (A == A1 + A2 + A3);
    }

int main()
    {
      /*in_triangle() function takes coordinates of A,B,C as parameters along with coordinates of P */
      /*Here  A(0,0) , B(10,10) , C(5,20) and point P(5,10)*/
      if (in_triangle(0, 0, 10, 0, 5, 20, 5, 10))
           printf ("Inside");
      else
           printf ("Not Inside");
      return 0;
    }
