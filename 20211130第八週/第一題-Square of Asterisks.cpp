/*
�мg�X�@�Ө禡void square( int side )�A�Ө禡�b�ù�������άP���e�X�@�ӹ�ߥ���ΡA������O�Ѿ�ưѼ�side���w�C�ü��g�A��D�禡���ϥΪ̿�J����C�Ҧp�A�p�G�ϥΪ̿�J4�A�I�s�禡��|��ܥH�U�ϧΡG

****
****
****
****

�� �аt�Xmain�禡����Amain�禡�Фŭק�


*/


#include <iostream>
using namespace std;
void square(int side){
	int a,b,c,d;
	for(a=1;a<=side;a++){
		for(b=1;b<=side;b++){
			cout<<'*';
		}
		cout<<endl;
	}
	
}

int main(){
  int side;
  cin>>side;
  square(side);
}
