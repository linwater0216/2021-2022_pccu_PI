/*
將會輸入未知個數的值，並請撰寫一支程式運用while迴圈警示值控制之特性，找出這些數字的總和，最後輸出。

輸入說明：輸入未知個數的正整數值(int)。

輸出說明：請根據題意，不需考慮任何例外狀況，輸出總和(警示迴圈之警示值為 -1)。

範例輸入：
1 2 3 4 5 -1

範例輸出：
15

*/


#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e;
	cin>>a;
	b=0;
	while(a!=-1){
		b=b+a;
		cin>>a;
	}
	cout<<b<<endl;
}
