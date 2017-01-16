
#include <iostream>
using namespace std;
#include "myLib.h"
int main(){
  cout << cube(3) << endl;
  cout << square(2) << endl;
}
int cube(int x)
{
 return x*square(x);
}
int square(int x)
{
 return x*x;
} 
