/*
將會輸入5位數之值，並請撰寫一支程式反轉這個數字，假設這5位數是迴文，請輸出下方說明字串，其餘則印出反轉後之值。

輸入說明：輸入 1 個 5 位數正整數值(int)。

輸出說明：請根據題意，只需判斷輸入值是否為迴文，若是迴文請輸出「It is a Palindrome text.」，否則印出反轉後之值，其餘例外狀況不需考慮，務必使用餘數概念拆解數字。

範例輸入(1)：
12345

範例輸出(1)：
54321

範例輸入(2)：
12321

範例輸出(2)：
It is a Palindrome text.
*/


#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,z;
	cin>>z;
	a=z%10;
	b=z/10%10;
	c=z/10/10%10;
	d=z/10/10/10%10;
	e=z/10/10/10/10%10;
	if(a==e&&b==d){
		cout<<"It is a Palindrome text."<<endl;
	}
	else{
		cout<<a<<b<<c<<d<<e<<endl;
	}
}
