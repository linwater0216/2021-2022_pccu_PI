/*
�p��T��ƪ��Ӧ�B�Q��M�ʦ줧�`�M�C

��J�����G��J�@�ӤT��ƪ���ơC

��X�����G�ھ��D�N�A��X�`�M�C

�d�ҿ�J�G
487

�d�ҿ�X�G
19

*/

#include <iostream>
using namespace std;
int main() {
	int a1=0;
	int z;
	cin>>a1;
	for(int i=0;i<3;i++){
		z=z+a1%10;
		a1=a1/10;
	}
	cout<<z<<endl;
}
