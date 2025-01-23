/*
將會輸入一串未知長度的八進位之值，並請撰寫一支程式使用while迴圈印出它所代表的十進位整數。

輸入說明：輸入只包含0~7的正整數值(int)。

輸出說明：請根據題意，不需考慮任何例外狀況，印出它所代表的十進位整數。

範例輸入：
777

範例輸出：
511

*/


#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c,d,e,z;
	cin>>z;
	a=0;
	b=0;
	while(z!=0){
		a=a+z%10*pow(8,b);
		b++;
		z=z/10;
	}
	cout<<a;
}
