/*
�N�|��J8��ƪ��ȡA�ýЧQ��switch���g�@��{�������H�U��洫��ӼƭȨå[�`�A�J��0�h�Ҧ��ƭ��H(-1)��B��C

������:
1 | +9
2 | +8
3 | +7
4 | +6
5 | +5
6 | +4
7 | +3
8 | +2
9 | +1

��J�����G��J8�쥿��ƭ�(int)�C

��X�����G�Юھ��D�N�A���ݦҼ{����ҥ~���p�A��������X�`�M�C

�d�ҿ�J�G
14089036

�d�ҿ�X�G
23

�d�ҹB��G
9 + 6 + 2*(-1) + 1*(-1) + 7*(-1) *(-1) + 4*(-1) *(-1)


*/


#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,z;
	cin>>z;
	a=0;
	for(;z>0;z/10){
		b=z%10;
		switch(b){
			case 1:
				a=a+9;
				break;
			case 2:
				a=a+8;
				break;
			case 3:
				a=a+7;
				break;
			case 4:
				a=a+6;
				break;
			case 5:
				a=a+5;
				break;
			case 6:
				a=a+4;
				break;
			case 7:
				a=a+3;
				break;
			case 8:
				a=a+2;
				break;
			case 9:
				a=a+1;
				break;
			
		} 
	}
	cout<<a<<endl;
}
