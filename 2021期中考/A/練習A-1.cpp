/*
�N�|��J5�ӭȡA�ýм��g�@��{����X�o5�ӼƦr����̳̤j�B��̳̤p�A�̫��X�C

�� �`�N�G�Фūŧi�����ܼƤ�j�p�A�_�h�N�����p���C

��J�����G��J5�ӥ���ƭ�(int)�C

��X�����G�Юھ��D�N�A���ݦҼ{����ҥ~���p�A��X5�ӭȤ��̤j�ơB�̤p�ơC

�d�ҿ�J�G
1 2 3 4 5

�d�ҿ�X�G
5 1

*/


#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>b;
	c=b;
	d=b;
	for(a=1;a!=5;a++){
		cin>>b;
//		cout<<b<<endl;
		if(b>=c){
			c=b;
		}
		if(b<=d){
			d=b;
		}
	}
	cout<<c<<" "<<d<<endl;
}
