/*�Y�@�����q�Q�n�z�L���ں����ǰe��ơA
�L�̩Ҧ�����Ƴ��O�H�|��ƪ���ƨӶǰe�A
�åH�U�C����k�[�K�G
�N�C�@��Ƥ��O�[7�A
�M��N���ư��H10�A
�ұo�l�ƧY���s���ơA
�H�����N��Ӫ���ơC
�M��N�Ĥ@�Ӧ�ƩM�ĤT�Ӧ�ƥ洫�A
�ĤG�Ӧ�ƩM�ĥ|�Ӧ�ƥ洫�C
�̫�o��[�K�L����ơC
�мg�@�ӵ{��Ū�J�[�K�L���|��ƾ�ơA
�M��N���ѱK����Ӫ��Ʀr�C

��J�����G�ھ��D�ؿ�J�@�ӥ|���ơC

��X�����G�ھ��D�N�A��X�ѱK�L�����(����O�o����)�C

�d�ҿ�J�G
189

�d�ҿ�X�G
1234
*/

#include<iostream>
using namespace std;
int main(){
    int A;
    int B;
    int C;
    int D;
    int E;
    int F;
	cin>>E;
	A=E%10;//�� 
	B=E/10%10;//�d 
	C=E/10/10%10;//�� 
	D=E/10/10/10%10;//�Q
	if(A==0){
	A=3;
	}
	else{
		if(A>=7){
			A=A-7;
		}
		else{
			A=A+10-7;
		}
	}
	
	if(B==0){
	B=3;
	}
	else{
		if(B>=7){
			B=B-7;
		}
		else{
			B=B+10-7;
		}
	}
	
	if(C==0){
	C=3;
	}
	else{
		if(C>=7){
			C=C-7;
		}
		else{
			C=C+10-7;
		}
	}
	
	if(D==0){
	D=3;
	}
	else{
		if(D>=7){
			D=D-7;
		}
		else{
			D=D+10-7;
		}
	}
	F=B*1000+A*100+D*10+C*1;
	
	cout<<F<<endl;
}
