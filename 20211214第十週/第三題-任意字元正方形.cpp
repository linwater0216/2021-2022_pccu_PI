/*
�D�ءG�мg�X�@�Ө禡void square(int side, char fillCharacter)�A�Ө禡�b�ù�������Φr���Ѽ�fillCharacter�e�X�@�ӹ�ߥ���ΡA������O�Ѿ�ưѼ�side���w�C�Ҧp�A�p�G�ϥΪ̿�J���5�A�Ӧr������#���A�h�|�L�X�H�U�ϧΡG

#####
#####
#####
#####
#####

�� �аt�Xmain�禡����Amain�禡�Фŭק�
*/ 

#include <iostream>
using namespace std;

void square(int side, char fillCharacter){
	int a=side,b=side;
    while(a>0){
    	while(b>0){
    		cout<<fillCharacter;
    		b=b-1;
		}
		a=a-1;
		b=side;
		cout<<endl;
	}
	cout<<endl;
}

int main(){
	int side;
	char fillCharacter;

	cin >> side >> fillCharacter;
	square(side, fillCharacter);
}
