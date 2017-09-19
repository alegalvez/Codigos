#include <iostream>
using namespace std;
int main ()
{

 int f,c;
 cout << " Enter the temperature in °Fahrenheit " << endl;
 cin >> f;
 c = (f-32)*5/9;
 cout << ""<< f<<"°F = " << c<<"°C " << endl;

 if (c >= 100)
 {
 cout << " With this temperature water boils. " << endl;
 }

 else
 {
 cout << " With this temperature water doesn't boil. " << endl;
 }

 return 0;
}
