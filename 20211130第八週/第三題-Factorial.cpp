/*
�м��g�@�Ө禡int factorial(int n)�A�Ө禡�����@�����n�A�p��öǦ^n!���ȡC�pfactorial(5)�h�Ǧ^120�C�Шϥ�for�j�駹���A�ФŨϥλ��j�Υ���D�j��覡�C

�� �аt�Xmain�禡����Amain�禡�Фŭק�

*/


#include <iostream>
using namespace std;

int factorial(int n){
	int b;
	b=1;
	for(;n>0;n--){
		b=b*n;
	}
	return b;
}


int main(){
    int num;
    cin >> num;
    cout << factorial(num)<<endl;
}
