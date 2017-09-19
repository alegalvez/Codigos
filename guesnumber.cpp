#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()

{

srand(time(NULL));
int n1,n2;
n1 = rand();
n1 = n1 % 100;
n1 =  n1 + 1;
do
{
cout << " Try to guess a random number from 0 to 100 " << endl;
cin >> n2;

if (n1<n2)
{cout << " The number you're guessing is lower " << endl;}

else if (n1>n2)
{cout << " The number you're guessing is higuer " << endl;}
}

while (n1!=n2);
cout << " Congratulations! You guessed the number " << endl;

return 0;
}
