/*
�D�ءG�м��g�@�ӻ��j�禡int power(int base, int exp)�A�Ө禡���⥿���base�Bexp�A�p�⦸�褧�ȡC�Шϥλ��j�����A�ФŨϥΰj��覡�C

�� �аt�Xmain�禡����Amain�禡�Фŭק�
*/ 

#include <iostream>
using namespace std;

int power(int base, int exp){
	if( exp == 0 )
        return 1;
    if( exp >= 1 )
        return base * power(base,exp-1);
}

int main(){
	int base, exp;

	for(int i=0; i<10; i++)
	{
		cin >> base >> exp;
		cout << power(base, exp) << endl;
	}

	return 0;
}
