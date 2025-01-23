/*
(各位數的和)寫一個函式int sumOfDigits(int n)，該函式接收一正整數n，計算並傳回此整數之各位數字和。

Write a function that takes a integer value n and returns the digit sum of n.

(e.g. the digit sum of 84001 is calculated as 8+4+0+0+1 = 13)

撰寫下列函式並配合所給主程式執行，請自行含括所需之標頭檔。
*/ 

#include <iostream>
#include <cmath>
using namespace std;
int sumOfDigits(int n){
	int a=0,b,t=0;
	b=n;
	for(int i=0;i<999;i++){//位數 
		t=t+n%10;
		n=n/10;
	}
	return t;
}
int main()
{
    int num;
    cin >> num;
	cout << sumOfDigits(num)<< endl;      
}
