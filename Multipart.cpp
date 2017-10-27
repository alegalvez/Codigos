
#include <iostream>
#include <fstream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::fstream;
struct structure
{
 int chars, lines;
};
struct structure counttext (string name)
{
  fstream file;
  file.open(name.c_str());
  string line;
  int countlines=0;
  int countchars=0;
  while (getline(file, line))
  {
    countlines++;
    countchars += line.length();
  }
 struct structure answer;
 answer.chars = countchars;
 answer.lines= countlines;
 return answer;
}
int main ()
 {
string file;
cout<< " Enter a file name "<<endl;
cin >> file;
struct structure answer = counttext(file);
cout <<" The file have " << answer.lines <<" lines and " << answer.chars <<" characters. "<<endl;
return 0;
 }
