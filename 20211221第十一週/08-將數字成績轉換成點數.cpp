/*
�аt�Xmain�禡����Amain�禡�Фŭק�A�ȼ��g�禡�w�q�P�禡�쫬
(�N�Ʀr���Z�ഫ���I��) �м��g�禡qualityPoints�A�Ө禡�iŪ�J�ǥͪ��������Z�A�p�G�䥭�����Z�b90-100�����A�N�Ǧ^4�F�Y�b80-89�����A�Ǧ^3�A�������Z�b70-79�����A�Ǧ^2�F�������Z�b60-69�����A�N�Ǧ^ 1�F�Y�����C��60�A�Ǧ^0�C

(Quality Points for Numeric Grades) Write a function quality Points that inputs a student��s average and returns 4 if a student��s average is 90�V100, 3 if the average is 80�V89, 2 if the average is 70�V79, 1 if the average is 60�V69 and 0 if the average is lower than 60.

Note: Please do not modify the main function in the given program.

*/ 

#include <iostream>
using namespace std;

int qualityPoints(int n){
	n=n/10;
	switch(n){
		case 10:
		case 9:
			return 4;
			break;
		case 8:
			return 3;
			break;
		case 7:
			return 2;
			break;
		case 6:
			return 1;
			break;
		default:
			return 0;
			break;
	}
}


int main(){
   int average; // current average
   for ( int loop = 1; loop <= 5; loop++ ) {
      cin >> average;
      cout << qualityPoints( average ) << endl;
   } // end for
   cout << endl;
} // end main
