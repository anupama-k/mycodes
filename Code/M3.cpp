#include <iostream>
using namespace std;
int main(){
const char* s = "hello world";
int n;
cout << "Enter a number ";
cin >> n;
int i=0;
do{
cout << s << endl;
i++;
}while(i<n);
  return 0;
}

