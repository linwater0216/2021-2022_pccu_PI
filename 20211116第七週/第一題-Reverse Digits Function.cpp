/*
�м��g�@�Ө禡reverseDigits�A��J�@�Ӿ�ƭȡA�ñN���ȫ��Ө�Ʀr���ۤ϶��ǶǦ^�C�Ҧp�A�ǤJ�Ʀr7631�A�h�禡�Ǧ^1367�C

�� �аt�Xmain�禡����Amain�禡�Фŭק�
*/
#include <iostream>
#include <cmath>
using namespace std;
int reverseDigits(int w);

int main()
{
   int number;

	cin >> number;
	cout << reverseDigits( number ) << endl;
   
}

int reverseDigits(int w){
	int y,t=0,i=0;
	y=w;
	for(;y>0;i++){
		y=y/10;
	}
	for(;i>0;i--){
		t=t+(w%10)*pow(10,i-1);
		w=w/10;
	}
    return t;
}
