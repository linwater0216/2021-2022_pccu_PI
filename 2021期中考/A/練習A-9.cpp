/*
�N�|��J6��ƪ��ȡA�ýм��g�@��{�������H�U���ϥ�switch����ӼƭȨå[�`�C

������:

0 | 99
1 | 88
2 | 77
3 | 66
4 | 55
5 | 44
6 | 33
7 | 22
8 | 11
9 | 0

��J�����G��J6�쥿��ƭ�(int)�C

��X�����G�Юھ��D�N�A���ݦҼ{����ҥ~���p�A��������X�`�M�C

�d�ҿ�J�G
172674

�d�ҿ�X�G
297
*/


#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f,g,h;
	e=0;
	cin>>g;
	a=g%10;
	b=g/10%10;
	c=g/10/10%10;
	d=g/10/10/10%10;
	h=g/10/10/10/10%10;
	f=g/10/10/10/10/10%10;
//	cout<<a<<endl;
//	cout<<b<<endl;
//	cout<<c<<endl;
//	cout<<d<<endl;
//	cout<<h<<endl;
//	cout<<f<<endl;
	switch(a){
		case 0:
			e=e+99;
			break;
		case 1:
			e=e+88;
			break;
		case 2:
			e=e+77;
			break;
		case 3:
			e=e+66;
			break;
		case 4:
			e=e+55;
			break;
		case 5:
			e=e+44;
			break;
		case 6:
			e=e+33;
			break;
		case 7:
			e=e+22;
			break;
		case 8:
			e=e+11;
			break;
		case 9:
			e=e+0;
			break;
	}
	switch(b){
		case 0:
			e=e+99;
			break;
		case 1:
			e=e+88;
			break;
		case 2:
			e=e+77;
			break;
		case 3:
			e=e+66;
			break;
		case 4:
			e=e+55;
			break;
		case 5:
			e=e+44;
			break;
		case 6:
			e=e+33;
			break;
		case 7:
			e=e+22;
			break;
		case 8:
			e=e+11;
			break;
		case 9:
			e=e+0;
			break;
	}
	switch(c){
		case 0:
			e=e+99;
			break;
		case 1:
			e=e+88;
			break;
		case 2:
			e=e+77;
			break;
		case 3:
			e=e+66;
			break;
		case 4:
			e=e+55;
			break;
		case 5:
			e=e+44;
			break;
		case 6:
			e=e+33;
			break;
		case 7:
			e=e+22;
			break;
		case 8:
			e=e+11;
			break;
		case 9:
			e=e+0;
			break;
	}
	switch(d){
		case 0:
			e=e+99;
			break;
		case 1:
			e=e+88;
			break;
		case 2:
			e=e+77;
			break;
		case 3:
			e=e+66;
			break;
		case 4:
			e=e+55;
			break;
		case 5:
			e=e+44;
			break;
		case 6:
			e=e+33;
			break;
		case 7:
			e=e+22;
			break;
		case 8:
			e=e+11;
			break;
		case 9:
			e=e+0;
			break;
	}
	switch(h){
		case 0:
			e=e+99;
			break;
		case 1:
			e=e+88;
			break;
		case 2:
			e=e+77;
			break;
		case 3:
			e=e+66;
			break;
		case 4:
			e=e+55;
			break;
		case 5:
			e=e+44;
			break;
		case 6:
			e=e+33;
			break;
		case 7:
			e=e+22;
			break;
		case 8:
			e=e+11;
			break;
		case 9:
			e=e+0;
			break;
	}
	switch(f){
		case 0:
			e=e+99;
			break;
		case 1:
			e=e+88;
			break;
		case 2:
			e=e+77;
			break;
		case 3:
			e=e+66;
			break;
		case 4:
			e=e+55;
			break;
		case 5:
			e=e+44;
			break;
		case 6:
			e=e+33;
			break;
		case 7:
			e=e+22;
			break;
		case 8:
			e=e+11;
			break;
		case 9:
			e=e+0;
			break;
	}
	cout<<e<<endl;
}
