/*
�м��g�@�Ө禡int sqrfloor(int n)�A�Ө禡�����@�����n�A�p��öǦ^�p�󵥩�n�B�̱���n�����������k(��������ơG�}�ڸ�������Ƥ���)�C�psqrfloor(5)�h�Ǧ^4�Fsqrfloor(9)�h�Ǧ^9�C������O�_�ϥμƾǨ禡�w�A�i�ۥѿ�ܡC

�� �аt�Xmain�禡����Amain�禡�Фŭק�

*/

#include <iostream>
#include <cmath>
using namespace std;

int sqrfloor(int n){
	int a,b,c;
	for(;n>0;n--){
		c=sqrt(n);
		if(c*c==n){
			return n;
		}
	}
}

int main(){
    int num;
    cin >> num;
    cout << sqrfloor(num)<<endl;
}
