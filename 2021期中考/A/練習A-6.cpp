/*
將會輸入3個 A~Z 的值，並請撰寫一支程式將這三個值轉換為十進位制 ASCII code 後加總。

輸入說明：輸入3個連續 A~Z 的值(char)。

輸出說明：請根據題意，不需考慮任何例外狀況，轉換為十進位制 ASCII code 後加總。

範例輸入：
ABC

範例輸出：
198

*/


#include<iostream>
using namespace std;
int main(){
	char a,b,c;
	int d;
	d=0;
	cin>>a>>b>>c;
	d=a+b+c;
	cout<<d<<endl;
}
