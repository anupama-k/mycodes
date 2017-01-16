#include <iostream>
using namespace std;

char* foo();

int main(){
  cout << foo() << endl;
}

char* foo(){
  return "hello";
}
