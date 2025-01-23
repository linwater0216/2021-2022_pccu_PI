/*
將會輸入一串二進位之值，並請撰寫一支程式印出它所代表的八進位整數。

輸入說明：輸入只包含0和1的正整數值(int)。

輸出說明：請根據題意，不需考慮任何例外狀況，印出它所代表的八進位整數。

※ 注意：八進位整數只包含0~7

範例輸入：
10101010

範例輸出：
252

*/


#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c,d,e,f,g,h,y,z;
	cin>>z;
	a=0;
	b=0;
	while(z!=0){
		a=a+z%10*pow(2,b);
		b++;
		z=z/10;
	}
	printf("%0o\n",a);
}
