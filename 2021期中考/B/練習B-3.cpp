/*
�N�|��J�@�ӭȡA�ýм��g�@��{����X�Ӽƪ��Ҧ����]�ƨòέp��ӼơC

��J�����G��J 1 �ӥ���ƭ�(int)�C

��X�����G�Юھ��D�N�A���ݦҼ{����ҥ~���p�A��X�Ӽƪ��Ҧ����]�ƨòέp��ӼơA��X���Ÿ��P�r�Ҭ��b�Φr�C

�d�ҿ�J�G
6

�d�ҿ�X�G
1 2 3 6
Total:4
*/


#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,z;
	b=0;
	cin>>z;
	for(a=1;a<=z;a++){
		if(z%a==0){
			cout<<a;
			b++;
		}
	}
	cout<<endl<<"Total:"<<b<<endl;
}
