/*
�N�|��J�@�ӭȡA�ýм��g�@��{���P�_��O�_����ơC

��J�����G��J�@�ӥ����(int)�C

��X�����G�Юھ��D�N�A�ϥ� for �j��P if...else �P�_��O�_����ơA�p�G�O��ơA�h��X�uIt is a prime number.�v�A�_�h��X�uIt is not a prime number.�v�A��l�ҥ~���p���ݦҼ{�C

�d�ҿ�J(1)�G
3559

�d�ҿ�X(1)�G
It is a prime number.

�d�ҿ�J(2)�G
3558

�d�ҿ�X(2)�G
It is not a prime number.
*/


#include<iostream>
using namespace std;
int main(){
	int a,b,z;
	cin>>z;
	b=0;
	for(a=1;z>a;a++){
		if(z%a==0){
			b++;
		}
	}
	if(b>1){
		cout<<"It is not a prime number."<<endl;
	}
	else{
		cout<<"It is a prime number."<<endl;
	}
}
