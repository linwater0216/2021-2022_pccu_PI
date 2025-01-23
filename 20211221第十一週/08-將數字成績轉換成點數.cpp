/*
請配合main函式執行，main函式請勿修改，僅撰寫函式定義與函式原型
(將數字成績轉換成點數) 請撰寫函式qualityPoints，該函式可讀入學生的平均成績，如果其平均成績在90-100之間，就傳回4；若在80-89之間，傳回3，平均成績在70-79之間，傳回2；平均成績在60-69之間，就傳回 1；若平均低於60，傳回0。

(Quality Points for Numeric Grades) Write a function quality Points that inputs a student’s average and returns 4 if a student’s average is 90–100, 3 if the average is 80–89, 2 if the average is 70–79, 1 if the average is 60–69 and 0 if the average is lower than 60.

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
