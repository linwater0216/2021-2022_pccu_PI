/*

�м��g�@�ӻ��j�禡int Factorial(int n)�A�Ө禡�����@�����n�A�p��öǦ^n!���ȡC�pFactorial(5)�h�Ǧ^120�C�Шϥλ��j�����A�ФŨϥΰj��覡�C

�� �аt�Xmain�禡����Amain�禡�Фŭק�


*/

#include <iostream>
#include <iomanip>
using namespace std;

int Factorial(int n){
	if( n == 0 )
        return 1;
    if( n >= 1 )
        return n*Factorial(n-1);
}

int main(){
	int number;
	for(int i=0; i<10; i++){
		cin >> number;
		cout << Factorial(number)<<endl;
	}
	return 0;
}
