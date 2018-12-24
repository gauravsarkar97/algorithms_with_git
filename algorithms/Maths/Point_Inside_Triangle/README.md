# Point Inside Triangle

Program to check if a point lies inside a triangle.

Given the three vertices of a triangle and another point P. We have to check if the given point P lies inside the given triangle.

# How to solve?

As we already know, the area(A) of a triangle whose coordinates of the three vertices are known is given by :\n A = [x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2)]/2 , where A=(x1,y1), B=(x2,y2) and C=(x3,y3). 
Next we use the simple concept that if P lies inside the triangle ABC, then sum of areas of triangles PAB, PBC and PAC will be equal to area of triangle ABC.\n

# Algorithm

Let the coordinates of the vertices be A(x1, y1), B(x2, y2) and C(x3, y3). Also, let the coordinates of the given point P be (x, y).\n
Step 1) We calculate the area of the given triangle ABC using the above mentioned mathematical formula, which is well known in coordinate geometry.\nStep 2) We calculate the area of the triangle PAB. We use the same formula for this. Let this area be A1.\nStep 3) We calculate the area of the triangle PBC. Let this area be A2.\nStep 4) We calculate the area of the triangle PAC. Let this area be A3.\nStep 5) If P lies inside the triangle, then sum of areas of the three sub-triangles must be equal to the area of the original triangle ABC, that is, A1 + A2 + A3 = A.\n  If true, then P lies inside ABC.\n  Else P lies outside ABC.

### Input Format

- A function takes coordinates of A,B,C as parameters along with coordinates of P.


### Output Format

- Message displaying whether point is INSIDE or not.

### Sample Input

```
in_triangle(0, 0, 10, 0, 5, 20, 5, 10)     // A(0,0) , B(10,10) , C(5,20) and point P(5,10)

```

### Sample Output

```
INSIDE

```


## Time Complexity
The time complexity is __O(1)__ as we are simply executing a mathematical formula, which is done in constant time.

### Implemented in:

- [C++](pt_inside_tri.cpp)
