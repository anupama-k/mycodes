#include <iostream>
#include <string>
 using namespace std;
 
 class Point
 {
 private :
 int x, y;

 public :
 Point (int u, int v) : x(u), y(v) {}
 int getX() { return x; }
 int getY() { return y; }
 void doubleVal ()
 {
 x *= 2;
 y *= 2;
 }
 };

 int main ()
 {
 Point myPoint (5, 3);//const Point myPoint (5, 3) gives error
 myPoint.doubleVal();
 cout << myPoint.getX() << " " << myPoint.getY() << "\n";
 return 0;
 }
