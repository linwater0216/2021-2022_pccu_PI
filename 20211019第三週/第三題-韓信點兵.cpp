/*�۶����H�~���L�H�A
�q�������M�I�ۤv�x�����H�ơA
�u�n���h�L����H�T�H�@�ơB
���H�@�ơB�C �H�@�Ʀa�ܴ����ΡA
�ӥL�C���u�ݤ@������Ƨ�(�l��)�N���D�`�H�ơC
��J�T�ӫD�t��� a�Bb�B c�A
��ܨC�ض��αƧ����H��(a<3, b<5,c<7)�A
�{���N��X�`�H�ƪ��̤p��(�γ��i�L��)�C
�w���`�H�Ƥ��p�� 10�A
���W�L 100�C
�խY�L�ѡA
�п�X�yNo answer�z�C
�B��while�j�駹�����D�C

��J�����G�ھ��D�ؿ�J�T�ӫD�t��ơC

��X�����G�ھ��D�N�A��X�`�H�ƪ��̤p��(����O�o����)�C

�d�ҿ�J(1)�G
2 1 6

�d�ҿ�X(1)�G
41

�d�ҿ�J(2)�G
2 1 3

�d�ҿ�X(2)�G
No answer
*/
#include<iostream>
using namespace std;
int main(){
    int A;
    int B;
    int C;
    int D;
	cin>>A;//3
	cin>>B;//5
	cin>>C;//7
	D=10;
	while(!(D%3==A && D%5==B &&D%7==C)){
		D=D+1;
	}
	if(D>=100){
		cout<<"No answer"<<endl;
	}else{
		cout<<D<<endl;
	}
	
}
