/*
�п�J��Ӿ�ơA��Ƥ���100��999�����A��X��Ƥ����Ҧ������P��ƻP�ӼơC�Y�T��� abc ����abc=a3+b3+c3�A�h�٨䬰���P��ơC�Ҧp153=13+53+33�A�ҥH 153 �����P��ơC�Шϥ�while�j�駹���A�ФŨϥμƾǨ禡�w�C

��J�����G�ھ��D�ؿ�J��Ӿ�ơC

��X�����G�ھ��D�N�A��X��Ƥ����Ҧ������P��ƻP�Ӽ�(����O�o����)�C

�d�ҿ�J�G
100 400

�d�ҿ�X�G
153
370
371
Total:3
*/

#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f;
	f=0;
	cin>>a>>b;
	while(a<=b){
		c=a/100%10;
		d=a/10%10;
		e=a%10;
		if(a==(d*d*d+e*e*e+c*c*c)){
			cout<<a<<endl;
			f++;
		}
		a++;
	}
	cout<<"Total:"<<f<<endl;
}
