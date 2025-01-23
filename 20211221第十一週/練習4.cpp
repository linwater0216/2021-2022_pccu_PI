/*
題目:

請撰寫出一個函式 string maxSubString(string, string) ，來找出兩個字串的最長共同子字串。

輸入格式

輸入長度為n的兩組字串(n為 10~40)

輸入格式

輸出上述字串的第一組最長子字串

example:

輸入

CCYZAABCCX
GGYZABXGABCCXDSA

輸出

ABCCX



P.S: 請勿修改main函式，該main函式會執行10次程式

參考網址
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
//		cout<<val1<<endl<<val2<<endl;測試用 
		cout << "Test" << i << ": " << maxSubString(val1, val2) << endl;
	}
}
