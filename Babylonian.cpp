
#include <iostream>
#include <cmath>
using namespace std;
double sqrtt(double);
int main()
{
int n;
cout << "Enter a number " << endl;
cin >> n;
double r=sqrtt(n);
cout << "The square root of your number is " << r <<  endl;
  return 0;
}
double sqrtt(double n)
{
  double e = .0001;
  double a = n;
  while ((a-n/a)>e)
  {
    a = (a+ n/a)/2;
  }
  return a;
}
