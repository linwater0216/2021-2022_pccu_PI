/*
�D��:

�м��g�X�@�Ө禡 string maxSubString(string, string) �A�ӧ�X��Ӧr�ꪺ�̪��@�P�l�r��C

��J�榡

��J���׬�n����զr��(n�� 10~40)

��J�榡

��X�W�z�r�ꪺ�Ĥ@�ճ̪��l�r��

example:

��J

CCYZAABCCX
GGYZABXGABCCXDSA

��X

ABCCX



P.S: �Фŭק�main�禡�A��main�禡�|����10���{��

�ѦҺ��}
https://naoerikicode.blogspot.com/2018/05/c_57.html
https://yuihuang.com/dp-lcs/
*/ 

#include <iostream>
#include <string>
using namespace std;

string maxSubString(string s1, string s2){
	 bool ischeck = false;
 string lstr,sstr;
 int a, b;
 a = 0;
 b = 0;
 lstr = s1;
 sstr = s2;
 if (s1.length() < s2.length())
 {
  lstr = s1;
  sstr = s2;
 }
 for (int j = sstr.length(); j > 0 && !ischeck; j--)
 {
  for (int i = 0; i <= sstr.length() - j && !ischeck; i++)
  {
   lstr.find(sstr.substr(i, j));
   if (string::npos != lstr.find(sstr.substr(i, j)))
   {
//    cout << "Longest Common Substring:" << sstr.substr(i, j) << endl;
    a = i;
    b = j;
    ischeck = true;
   }
  }
 }
 return sstr.substr(a, b);
} 

int main()
{
	string val1, val2;
	for (int i = 1; i <= 10; i++)
	{
		getline(cin, val1);
		getline(cin, val2);
//		cout<<val1<<endl<<val2<<endl;���ե� 
		cout << "Test" << i << ": " << maxSubString(val1, val2) << endl;
	}
}
