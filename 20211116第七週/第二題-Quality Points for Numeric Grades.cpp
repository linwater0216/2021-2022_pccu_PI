/*
�м��g�禡qualityPoints�A�Ө禡�iŪ�J�ǥͪ��������Z�A�p�G�䥭�����Z�b90-100�����A�N�Ǧ^4�F�Y�b80-89�����A�Ǧ^3�A�������Z�b70-79�����A�Ǧ^2�F�������Z�b60-69�����A�N�Ǧ^ 1�F�Y�����C��60�A�Ǧ^0�C

�� �аt�Xmain�禡����Amain�禡�Фŭק�

*/
#include <iostream>
using namespace std;

int qualityPoints(int y);

int main()
{
   int average;

   for(int loop=1;loop<=5;loop++){
      cin >> average;
      cout << qualityPoints( average ) << endl;
   }

   cout << endl;
}

int qualityPoints(int y){
	int a;
	a=0;
	y=y/10;
	switch(y){
		case 0:
		case 9:
			a=a+4;
			break;
		case 8:
			a=a+3;
			break;
		case 7:
			a=a+2;
			break;
		case 6:
			a=a+1;
			break;
		default:
        	a=0;
        	break;
	}
	return a;
}
