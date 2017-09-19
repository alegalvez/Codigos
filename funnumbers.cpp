#include <iostream>
using namespace std;
int main()
{

int n1, n2, s, re, m, d, r;
cout << " Enter an integer number " << '\n';
cin>> n1;
cout << " Enter another number " << '\n';
cin>> n2;
s = n1 + n2;
re = n1 - n2;
m = n1 * n2;
d = (int) n1 / n2;
r = n1 % n2;
cout << " The sum of your numbers is " << s << '\n';
cout << " The difference between your numbers is " << r << '\n';
cout << " The product of your numbers is " << m << '\n';
cout << " The integer based division between your numbers is " << d << '\n';
cout << " The remainder of the division between your numbers is " << r << '\n';

return 0;
}
