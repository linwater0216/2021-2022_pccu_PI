/*
�N��J�T���ΤT����׭ȡA�ýм��g�@��{���ϥ� if...else �P�_���O�_��c���������T���Ϊ��T������C

��J�����G��J3�ӥ���ƭ�(int)�C

��X�����G�Юھ��D�N�A�p�G�i�H�c�������T���ΡA�h��X�uIt is a right triangle.�v�A�p�G����c���A�h��X�uIt is not a right triangle.�v�C�p�G�ڥ��L�k�c���T���ΡA�h��X�uNot a triangle.�v

�d�ҿ�J(1)�G
1 1 0

�d�ҿ�X(1)�G
Not a triangle.

�d�ҿ�J(2)�G
3 4 5

�d�ҿ�X(2)�G
It is a right triangle.
*/


#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>c&&a+c>b&&b+c>a){
		if(a*a+b*b==c*c||c*c+a*a==b*b||c*c+b*b==a*a){
			cout<<"It is a right triangle."<<endl;
		}
		else{
			cout<<"It is not a right triangle."<<endl;
		}
	}
	else{
		cout<<"Not a triangle."<<endl;
	}
	}
