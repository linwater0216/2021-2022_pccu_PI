/*
�D�ءG�м��g�@�ӻ��j�禡int sumSquareNumber(int n)�A�Ө禡���@�����n�A�p�⧹������Ʀܲ�n�����`�M�A�p 1+4+9+16+....+n*n �C�Шϥλ��j�����A�ФŨϥΰj��覡�C

�� �аt�Xmain�禡����Amain�禡�Фŭק�
*/ 

#include <iostream>
using namespace std;

int sumSquareNumber(int n){
	int a=0;
	a=a+n*n;
	if(a==0){
		return a;
	}
	else{
		return a+sumSquareNumber(n-1);
	}
}

int main(){
	int number;

	for(int i=0; i<10; i++)
	{
		cin >> number;
		cout << sumSquareNumber(number) << endl;
	}

	return 0;
}
