/*
將輸入一個四位數之值，並請撰寫一支程式使用 switch 對應以下表格輸出對應之值。

對應表:

6731 | Programming

6920 | Programming internship

7268 | Program language

其他請輸出 error

輸入說明：輸入 1 個 4 位數正整數值(int)。

輸出說明：請根據題意，使用 switch 對應以下表格輸出對應之值，若不存在於表格之值請輸出error。

範例輸入(1)：
6731

範例輸出(1)：
Programming

範例輸入(2)：
1111

範例輸出(2)：
error

*/


#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e;
	cin>>a;
	switch(a){
	case 6731:
		cout<<"Programming"<<endl;
		break;
	case 6920:
		cout<<"Programming internship"<<endl;
		break;
	case 7268:
		cout<<"Program language"<<endl;
		break;
	default:
		cout<<"error"<<endl;
		break;
	}
}
