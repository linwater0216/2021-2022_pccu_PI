/*
Pi�ȵL�a�żƬ� Pi=4-4/3+4/5-4/7+4/9-4/11+�K�A�г]�p�{����J�@�Ӽ�n�A��ܭp��ܦ��żƲ�n�����k������ȡA�Шϥ�for�j�駹���C(�п�X�ܤp���I��K��)

��J�����G�ھ��D�ؿ�J�Ĥ@�Ӿ�ơC

��X�����G�ھ��D�N�A��X��n�����k�������(����O�o����)�C

�d�ҿ�J�G
10

�d�ҿ�X�G
3.04183962
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a;
	int b;
	double c;
	double d=0;
	cin>>a;
	for(int i=1;i<=a;i++){
		if(i%2==1){
			c=4.0/(i*2-1);
		}
		if(i%2==0){ 
			c=-4.0/(i*2-1);
		}
		d=d+c;
	}
	cout<<fixed<<setprecision(8)<<d<<endl;
//	cout<<c;
}
