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
   void setX (int newX) { x = newX ; }//const{ x = newX ; } gives error
 };

 int main ()
 {
 Point myPoint (5, 3);
 myPoint.setX(9001);
 cout << myPoint.getX() << " " << myPoint.getY() << "\n";
 return 0;
 }
