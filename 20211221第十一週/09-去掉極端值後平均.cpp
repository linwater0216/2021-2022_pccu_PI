/*
(�h�����ݭȫᥭ��)�g�@�Ө禡�A�Ө禡�������Ӧ��Z(0-100�����)�A�M�᩿���̤j�M�̤p�����Z�A������3�Ӧ��Z������Ǧ^�C

�`�N�G�Y�̤j�γ̤p���Z����ӥH�W�A�u�����@�Ӧ��Z���p�J�����C
�禡��ΡG double average(int, int, int, int, int)

Write a function that takes five integer values between 0 and 100

and returns the average of the remaining three values after discarding The top one value and the bottom one.

function prototype: double average(int, int, int, int, int)

���g�U�C�禡�ðt�X�ҵ��D�{������A�Цۦ�t�A�һݤ����Y�ɡC

*/ 

#include<iostream>
#include<iomanip>
using namespace std;
double average(int a,int b,int c,int d,int e){
	double t;
	int min=a,max=a;
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	if(d>max){
		max=d;
	}
	if(e>max){
		max=e;
	}
	if(b<min){
		min=b;
	}
	if(c<min){
		min=c;
	}
	if(d<min){
		min=d;
	}
	if(e<min){
		min=e;
	}
	t=(a+b+c+d+e-max-min)/3;
	return t;
}

int main(){
    int a1,a2,a3,a4,a5;
    cin >> a1 >> a2 >> a3 >>a4 >> a5;
    cout<<a1<<endl;
	cout<<a2<<endl;
	cout<<a3<<endl;
	cout<<a4<<endl;
	cout<<a5<<endl;
    cout<<setprecision(2)<<fixed<<average(a1,a2,a3,a4,a5)<<endl;
    
}
