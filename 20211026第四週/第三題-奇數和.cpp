/*
���A�@�ӽd�� a �� b �A�ЧA��X a �P b �����Ҧ��_�ƪ��M�C�Ҧp�G�d�� [2, 10] ���Ҧ��_�ƪ��M�N�O 3 + 5 + 7 + 9 = 24 �C�Шϥ�while�j�駹���C

��J�����G�ھ��D�ؿ�J��Ӿ�ơC


��X�����G�ھ��D�N�A��X�Ҧ��_�ƪ��M(����O�o����)�C


�d�ҿ�J�G
2 10


�d�ҿ�X�G
24
*/

#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	int c;
	cin>>a>>b;
	c=0;
	while(a<=b){
		if(a%2==1){
			c=c+a;
		}
		a++;
	}
	cout<<c<<endl;
}
