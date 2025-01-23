/*
將會輸入5個值，並請撰寫一支程式找出這5個數字中何者最大、何者最小，最後輸出。

※ 注意：請勿宣告五個變數比大小，否則將不予計分。

輸入說明：輸入5個正整數值(int)。

輸出說明：請根據題意，不需考慮任何例外狀況，輸出5個值中最大數、最小數。

範例輸入：
1 2 3 4 5

範例輸出：
5 1

*/


#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>b;
	c=b;
	d=b;
	for(a=1;a!=5;a++){
		cin>>b;
//		cout<<b<<endl;
		if(b>=c){
			c=b;
		}
		if(b<=d){
			d=b;
		}
	}
	cout<<c<<" "<<d<<endl;
}
