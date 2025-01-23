/*
ASCII(American Standard Code for Information Interchange，美國資訊交換標準程式碼)是基於拉丁字母的一套電腦編碼系統，由電報碼發展而來。第一版標準發布於1963年，1967年經歷了一次主要修訂，最後一次更新則是在1986年，至今為止共定義了128個字元。請輸入兩個數值，分別代表ASCII之範圍，並將範圍內轉換為字元印出。請使用while迴圈完成。

輸入說明：根據題目輸入兩個十進位制正整數，代表ASCII之範圍，輸入值介於33~126之間。

輸出說明：根據題意，輸出範圍內之字元(行尾記得換行)。

範例輸入：
48 60

範例輸出：
0123456789:;<

*/
#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cin>>a>>b;
    while(a<=b){
    	cout<< (char)a;
    	a++;
	}
}
