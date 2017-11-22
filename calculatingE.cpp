#include <iostream>
#include <math.h>
using namespace std;

double f (int n)
{
  if (n==0)
  {
    return 1;
  }
  else
  {
  return n*f(n-1);
  }
}
double ce(double pr)
{
  double e=0.0,oldE;
  int i=0;
  do
  {
   oldE=e;
   e+= (1/f(i));
   i=i+1;
  }
while(e-oldE>pr);
return e;
}

int main ()
{
 double pr;
 int a;
 cout<< " Enter the number of decimals needed for e " << endl;
 cin>> pr;
 cout<< " Enter the number of decimals you want to see "<< endl;
 cin>> a;
 double euler= ce(pr);
 cout.precision(a);
 cout<< " e (euler) value is " <<fixed<<euler<< endl;
 return 0;
 }
