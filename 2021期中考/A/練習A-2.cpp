/*
�N�|��J5�ӭȡA�ýм��g�@��{����X�o5�ӼƦr�������ȡA�̫��X�C

�� �`�N�G�Фūŧi�����ܼƭp�⥭���ȡA�_�h�N�����p���C

��J�����G��J5�ӥ���ƭ�(int)�C

��X�����G�Юھ��D�N�A���ݦҼ{����ҥ~���p�A��X5�ӭȪ�������(�����Ƚп�X��p���I���2��)�C

�d�ҿ�J�G
1 2 3 4 5

�d�ҿ�X�G
3.00

*/


#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a,b;
	double c;
	c=0;
	for(a=1;a!=6;a++){
		cin>>b;
		c=c+b;
	}
	cout<<fixed<<setprecision(2)<<c/5<<endl;
}
