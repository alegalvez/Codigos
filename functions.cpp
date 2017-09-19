#include <iostream>
using namespace std;

int suma (int a, int b)
{
  int m;
  m = a + b;
  return m;
}

int resta (int a, int b)
{
  int n;
  n = a - b;
  return n;
}

int mult (int a, int b)
{
  int v;
  v = a * b;
  return v;
}

int division (int a, int b)
{
  int c;
  c = a / b;
  return c;
}

int residuo (int a,int b)
{
  int x;
  x = a % b;
  return x;
}

int main()
{
int a,b;
cout << " Enter an integer number " << endl;
cin >> a;
cout << " Enter another integer number " << endl;
cin >> b;
cout << " The sum of your numbers is " << suma(a,b) << endl;
cout << " The difference between your numbers is " << resta(a,b) << endl;
cout << " The product of your numbers is " << mult(a,b) << endl;
cout << " The integer based division between your numbers is " << division(a,b) << endl;
cout << " The remainder of the division between your nubers is " << residuo(a,b) << endl;

return 0;
}
