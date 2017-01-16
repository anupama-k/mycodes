#include <iostream>
using namespace std;
int xPowerY(int base, int exponent);

int main()
{
    int p = xPowerY(2,3);
    cout << p << endl;
    
    return 0;
}

int xPowerY(int base, int exponent)
{
    int result = 1;
    for(int i =0; i<exponent; i++)
    result = result * base;
    return result;
}