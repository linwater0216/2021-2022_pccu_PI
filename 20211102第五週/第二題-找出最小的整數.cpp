/*
�г]�p�@�Өϥ�for�ԭz���{���A�����X�X�Ӿ�ƪ��̤p�ȡC���]Ū�����Ĥ@�ӼƦr�N�����Ʀr���ӼơC

��J�����G�ھ��D�ؿ�J�Ĥ@�Ӿ�Ƭ�����Ʀr���ӼơA�����J��ӼƤ��Ҧ���ơC

��X�����G�ھ��D�N�A��X�Ҧ��Ƥ��̤p��(����O�o����)�C

�d�ҿ�J�G
6 10 3 15 21 26 14

�d�ҿ�X�G
3

*/

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a;
	int b,c;
	cin>>a;
	b=9999999999999;
	for(int i=1;i<=a;i++){
		cin>>c;
//		cout<<a<<endl;

		if(c<b){
			b=c;
		}
		
	}
	cout<<b<<endl;
}
