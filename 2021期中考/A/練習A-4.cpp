/*
將會輸入未知個數的值，並請撰寫一支程式運用while迴圈警示值控制之特性，找出這些數字中何者最大，最後輸出。

輸入說明：輸入未知個數的正整數值(int)。

輸出說明：請根據題意，不需考慮任何例外狀況，輸出最大值(警示迴圈之警示值為 -1)。

範例輸入：
1 3 5 7 -1

範例輸出：
7
*/


#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e;
	cin>>a;
	b=a;
	while(a!=-1){
	cin>>a;
	if(a>=b){
		b=a;
	}
}
cout<<b<<endl;
}
