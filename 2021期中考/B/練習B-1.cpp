/*
�N�|��J5��Ƥ��ȡA�ýм��g�@��{������o�ӼƦr�A���]�o5��ƬO�j��A�п�X�U�軡���r��A��l�h�L�X����ᤧ�ȡC

��J�����G��J 1 �� 5 ��ƥ���ƭ�(int)�C

��X�����G�Юھ��D�N�A�u�ݧP�_��J�ȬO�_���j��A�Y�O�j��п�X�uIt is a Palindrome text.�v�A�_�h�L�X����ᤧ�ȡA��l�ҥ~���p���ݦҼ{�A�ȥ��ϥξl�Ʒ�����ѼƦr�C

�d�ҿ�J(1)�G
12345

�d�ҿ�X(1)�G
54321

�d�ҿ�J(2)�G
12321

�d�ҿ�X(2)�G
It is a Palindrome text.
*/


#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,z;
	cin>>z;
	a=z%10;
	b=z/10%10;
	c=z/10/10%10;
	d=z/10/10/10%10;
	e=z/10/10/10/10%10;
	if(a==e&&b==d){
		cout<<"It is a Palindrome text."<<endl;
	}
	else{
		cout<<a<<b<<c<<d<<e<<endl;
	}
}
