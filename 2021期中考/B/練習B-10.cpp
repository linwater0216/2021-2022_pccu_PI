/*
�м��g�@��{���Q��for�j��L�X�p�d�Ҫ��ϧΡA�ϧγ����ХH�y * �z��X�A��l�����ХH�y -�z(�) ��X�A�����Ÿ��Ҭ��b�Φr�C

�� �`�N�G�ȥi�ϥΥH�U�T�ӱԭz��X�B�U�Τ@�� cout <<'*'; cout <<'-'; cout << endl;

�d�ҿ�X�G
*******
*******
**---**
**-*-**
**---**
*******
*******

*/


#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e;
	for(a=1;a<=7;a++){
		for(b=1;b<=7;b++){
			if(a==3&&b==3||a==3&&b==4||a==3&&b==5||a==4&&b==3||a==4&&b==5||a==5&&b==3||a==5&&b==4||a==5&&b==5){
				cout<<'-';
			}
			else{
				cout<<'*';
			}
		}
		cout<<endl;
	}
}
