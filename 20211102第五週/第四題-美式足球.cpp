/*
�������y�S�ӰաI�[���̦b�����𮧷Q�n���o�ɶ��A�ҥH�j�a�M�w�ӤU�`���G���Ʒ|�O�p��C�U�`���W�h�O�ⶤ�̫᪺���ƥ[�`�A�Ϊ̨ⶤ�̫���Ƭۮt������ȡC �м��g�@��{���A��2�ӭȡA�ýЧA�ε{�����X�o2���̫᪺�o���O�h�֡C

��J�����G��J���Ĥ@�ӭȦ��@�Ӿ�ơA�N��H�U���h�ֲմ��ո�ơC�C�մ��ո�Ʀ�2�Ӥj�󵥩� 0 ����ư��]���O�� s �P d�As �N����ɵ�����2�����ƪ��`�M�A d �N����ɵ�����2�����Ʈt������ȡA�Шϥ�for�j�駹���C

��X�����G�ھ��D�N�A�C�մ��ո�ƿ�X�@�C�A�]�t2�Ӿ�ơA���O�N����ɵ����ɳo2�������ơA���Ƥj���b�e�B���Ƥp���b��C�p�G�S���o�˪����ƩάO�Y�����Ƭ��t�ơA�п�X�uimpossible�v�C

���Ъ`�N�G�������y�����Ƥ@�w�O�j�󵥩� 0 ����ơC

�d�ҿ�J�G
2
40 20
20 40

�d�ҿ�X�G
30 10
impossible
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a,b,c;
	cin>>c;
	for(int i=0;i<c;i++){
		cin>>a>>b;
		if(b>a){
			cout<<"impossible"<<endl;
		}
		else{
			cout<<(a+b)/2<<" "<<(a+b)/2-b<<endl;
		}
	}
}



