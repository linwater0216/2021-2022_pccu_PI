/*

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233�K�K�C�@���Ҭ��e�ⶵ�ۥ[���ƦC�٬��O��ƦC�A�м��g�@�ӻ��j�禡int Fibonacci(int n)�A�Ө禡���@�����n�A�L�X�O��ƦC������n�����ȡC�pFibonacci(10)�h�Ǧ^34�C�Шϥλ��j�����A�ФŨϥΰj��覡�C

�� �аt�Xmain�禡����Amain�禡�Фŭק�


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
