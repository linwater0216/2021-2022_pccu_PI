/*
請撰寫函式qualityPoints，該函式可讀入學生的平均成績，如果其平均成績在90-100之間，就傳回4；若在80-89之間，傳回3，平均成績在70-79之間，傳回2；平均成績在60-69之間，就傳回 1；若平均低於60，傳回0。

※ 請配合main函式執行，main函式請勿修改

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
