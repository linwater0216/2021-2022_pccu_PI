/*
�м��g�@�禡 bool isLeapYear(int y)�A�Ө禡�����@�N��褸�~��������ơA�Y�Ӧ~�׬��|�~�A�Ǧ^true�A�Y�_�h�Ǧ^false�C

�� �`�N�G�аt�Xmain�禡����Amain�禡�Фŭק�A�ȼ��g�禡�Y�i�C
*/


#include <iostream> 
using namespace std;
bool isLeapYear(int y){
	if(y%4==0&&y%100!=0||y%400==0){
		return true;
	}
	else{
		return false;
	}
}


int main(){
   int y;
   for(int i=0;i<3;i++){
   	  cin >> y;
	  if (isLeapYear(y)) 
	  	cout<<"TRUE"<<endl;
	  else 
	  	cout<<"FALSE"<<endl;
   }
}
