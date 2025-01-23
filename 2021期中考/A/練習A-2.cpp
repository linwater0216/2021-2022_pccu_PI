/*
將會輸入5個值，並請撰寫一支程式找出這5個數字的平均值，最後輸出。

※ 注意：請勿宣告五個變數計算平均值，否則將不予計分。

輸入說明：輸入5個正整數值(int)。

輸出說明：請根據題意，不需考慮任何例外狀況，輸出5個值的平均值(平均值請輸出到小數點後第2位)。

範例輸入：
1 2 3 4 5

範例輸出：
3.00

*/


#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a,b;
	double c;
	c=0;
	for(a=1;a!=6;a++){
		cin>>b;
		c=c+b;
	}
	cout<<fixed<<setprecision(2)<<c/5<<endl;
}
