/*
�N�|��J�@�ꥼ�����ת��K�i�줧�ȡA�ýм��g�@��{���ϥ�while�j��L�X���ҥN���Q�i���ơC

��J�����G��J�u�]�t0~7������ƭ�(int)�C

��X�����G�Юھ��D�N�A���ݦҼ{����ҥ~���p�A�L�X���ҥN���Q�i���ơC

�d�ҿ�J�G
777

�d�ҿ�X�G
511

*/


#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c,d,e,z;
	cin>>z;
	a=0;
	b=0;
	while(z!=0){
		a=a+z%10*pow(8,b);
		b++;
		z=z/10;
	}
	cout<<a;
}
