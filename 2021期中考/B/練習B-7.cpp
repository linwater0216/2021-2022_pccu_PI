/*
�N�|��J�@�ӭȡA�ýм��g�@��{���L�X�H�ӼƬ����צp�d�Ҫ��T���ΡC

��J�����G��J�@�ӥ����(int)�C

��X�����G�Юھ��D�N�A���ݦҼ{����ҥ~���p�A�Q��for�j��L�X�H��J�Ȭ����ת��ŤߤT���ΡA�T������������ХH�y * �z��X�A��l�����ХH�y -�z(�) ��X�A�����Ÿ��Ҭ��b�Φr�C

�� �`�N�G�ȥi�ϥΥH�U�T�ӱԭz��X�B�U�Τ@�� cout <<'*'; cout <<'-'; cout << endl;

�d�ҿ�J�G
7

�d�ҿ�X�G
------*
-----**
----*-*
---*--*
--*---*
-*----*
*******

*/


#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,z;
	cin>>z;
	for(a=1;a<=z;a++){
		for(b=1;b<=z;b++){
			if(b==z||b==z-a+1||a==z){
				cout<<'*';
			}
			else{
				cout<<'-';
			}
		}
		cout<<endl;
	}
	
}
