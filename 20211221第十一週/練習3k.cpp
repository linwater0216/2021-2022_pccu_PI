/*
(�U��ƪ��M)�g�@�Ө禡int sumOfDigits(int n)�A�Ө禡�����@�����n�A�p��öǦ^����Ƥ��U��Ʀr�M�C

Write a function that takes a integer value n and returns the digit sum of n.

(e.g. the digit sum of 84001 is calculated as 8+4+0+0+1 = 13)

���g�U�C�禡�ðt�X�ҵ��D�{������A�Цۦ�t�A�һݤ����Y�ɡC
*/ 

#include <iostream>
#include <cmath>
using namespace std;
int sumOfDigits(int n){
	int a=0,b,c=0;
	b=n;
	for(int i=0;i<999;i++){//��� 
		if(b!=0){
			b=b/10;
			c++;
		}
	}
	for(int i=0;i<c;i++){//��� 
		a=a+n%10;
		n=n/10;
//		cout<<a<<endl;
	}
	return a;
}
int main()
{
    int num;
    cin >> num;
	cout << sumOfDigits(num)<< endl;      
}
