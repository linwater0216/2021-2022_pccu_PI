/*
�м��g�@��{���Q��for�j��L�X�p�d�Ҫ��ϧΡA�ϧγ����ХH�y * �z��X�A��l�����ХH�y -�z(�) ��X�A�����Ÿ��Ҭ��b�Φr�C

�� �`�N�G�ȥi�ϥΥH�U�T�ӱԭz��X�B�U�Τ@�� cout <<'*'; cout <<'-'; cout << endl;

�d�ҿ�X�G
*-***-*
--***--
*******
*******
*******
--***--
*-***-*

*/


#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,z;
	for(a=1;a<=7;a++){
		for(b=1;b<=7;b++){
			if(a==1&&b==2||a==1&&b==6||a==2&&b==1||a==2&&b==2||a==2&&b==6||a==2&&b==7||a==6&&b==1||a==6&&b==2||a==6&&b==6||a==6&&b==7||a==7&&b==2||a==7&&b==6){
				cout<<'-';
			}
			else{
				cout<<'*';
			}
		}
		cout<<endl;
	}
}
