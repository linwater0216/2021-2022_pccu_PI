#include <iostream>
#include <string>
using namespace std;

int main()
{
 bool ischeck = false;
 string s1, s2, lstr, sstr;
 int a, b;
 a = 0;
 b = 0;
 cin >> s1 >> s2;
 lstr = s1;
 sstr = s2;
 if (s1.length() < s2.length())
 {
  lstr = s2;
  sstr = s1;
 }
 for (int j = sstr.length(); j > 0 && !ischeck; j--)
 {
  for (int i = 0; i <= sstr.length() - j && !ischeck; i++)
  {
   lstr.find(sstr.substr(i, j));
   if (string::npos != lstr.find(sstr.substr(i, j)))
   {
    cout << "Longest Common Substring:" << sstr.substr(i, j) << endl;
    a = i;
    b = j;
    ischeck = true;
   }
  }
 }
 return 0;
}
