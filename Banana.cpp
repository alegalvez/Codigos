#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::fstream;
using std::tolower;
using std::transform;
int enc (string name)
{
  fstream file;
  file.open(name.c_str());
  string line;
  int count=0;
  while (getline (file, line))
  {
    transform(line.begin(),line.end(),line.begin(), (int (*)(int))tolower);
    int busc = line.find("banana");
    while (busc != -1)
    {
      count++;
      busc = line.find("banana", busc+1);
    }
  }
return count;
}
int main ()
{
string file;
cout << "Introduce a file: "<<endl;
cin >> file;
int nb=enc(file);
cout<<" The word banana is repeated "<<nb<< " times in the document. "<<endl;
return 0;
}
