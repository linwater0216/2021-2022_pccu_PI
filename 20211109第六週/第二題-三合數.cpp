/*
�����T���Ϊ��T����i�H�������O��ƭȡC�����T���ΤT������T�Ӿ�ƭȡA�κ٬�����w�z���T�X�� (Pythagorean triple)�C�o�T���䪺���ץ��������H�U�����Y�A�]�N�O��Ѫ�������M�A��������������C�ФŨϥμƾǨ禡�w�p�⦸��C

��J�����G��Jn�A�p��b�T��������W�Ln�����p�U�A���h�ֲղ���w�z�T�X�ơC(�`�N�G3, 4, 5�B3, 5, 4�B4, 3, 5�B4, 5, 3�B5, 3, 4�P5, 4, 3�������P�@�աC)

��X�����G�ھ��D�N�A�ȥ��ϥΤT�h�_��for�j��h�թҦ��i��ʡA�ÿ�X�Ҧ��ռơC

�d�ҿ�J(1)�G
10

�d�ҿ�X(1)�G
2

�d�ҿ�J(2)�G
17

�d�ҿ�X(2)�G
5
*/


#include<iostream>
using namespace std;
int main(){
	int a,t=0;
	cin>>a;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			for(int x=1;x<=a;x++){
				if((i*i)+(j*j)==(x*x)){
					t=t+1;
				}
			}
		}
	}
	cout<<t/2<<endl;
}
