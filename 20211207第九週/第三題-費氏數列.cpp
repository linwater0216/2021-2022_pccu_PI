/*

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233……每一項皆為前兩項相加的數列稱為費氏數列，請撰寫一個遞迴函式int Fibonacci(int n)，該函式接一正整數n，印出費氏數列對應第n項之值。如Fibonacci(10)則傳回34。請使用遞迴完成，請勿使用迴圈方式。

※ 請配合main函式執行，main函式請勿修改


*/

#include <iostream>
#include <iomanip>
using namespace std;

int Fibonacci(int n){
	if(n==1)
	return 0;
	if( n==2 || n==3 )
        return 1;
    else
        return Fibonacci(n-1)+Fibonacci(n-2);
}

int main()
{
	int number;

	for(int i=0; i<10; i++)
	{
		cin >> number;
		cout << Fibonacci(number) << endl;
	}

	return 0;
}
