/*
請撰寫一個函式reverseDigits，輸入一個整數值，並將此值按照其數字的相反順序傳回。例如，傳入數字7631，則函式傳回1367。

※ 請配合main函式執行，main函式請勿修改
*/
#include <iostream>
#include <cmath>
using namespace std;
int reverseDigits(int w);

int main()
{
   int number;

	cin >> number;
	cout << reverseDigits( number ) << endl;
   
}

int reverseDigits(int w){
	int y,t=0,i=0;
	y=w;
	for(;y>0;i++){
		y=y/10;
	}
	for(;i>0;i--){
		t=t+(w%10)*pow(10,i-1);
		w=w/10;
	}
    return t;
}
