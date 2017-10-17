#include <iostream>
 using namespace std;
 int main ()
{
int n, cicle, factorial ; char r;
do
 { cicle=1 ; factorial = 1 ;
cout << " Enter a positive number ";
cin >> n;
while (cicle <= n)
   {
   factorial = factorial * cicle;
   ++cicle;
   }
cout << " The factorial of " << n << " is "<<factorial<<endl;
cout << " Would you like to try another number? [y/n]" << endl ;
cin >> r;
 }
while (r == 'y') ;
cout << " Done " << endl;
return 0;
}
