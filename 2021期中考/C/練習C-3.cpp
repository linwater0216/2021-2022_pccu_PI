/*
�N�|��J�@��G�i�줧�ȡA�ýм��g�@��{���L�X���ҥN���K�i���ơC

��J�����G��J�u�]�t0�M1������ƭ�(int)�C

��X�����G�Юھ��D�N�A���ݦҼ{����ҥ~���p�A�L�X���ҥN���K�i���ơC

�� �`�N�G�K�i���ƥu�]�t0~7

�d�ҿ�J�G
10101010

�d�ҿ�X�G
252

*/


#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c,d,e,f,g,h,y,z;
	cin>>z;
	a=0;
	b=0;
	while(z!=0){
		a=a+z%10*pow(2,b);
		b++;
		z=z/10;
	}
	printf("%0o\n",a);
}
