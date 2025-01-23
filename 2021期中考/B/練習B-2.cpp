/*
請撰寫一函式 bool isLeapYear(int y)，該函式接受一代表西元年份的正整數，若該年度為閏年，傳回true，若否則傳回false。

※ 注意：請配合main函式執行，main函式請勿修改，僅撰寫函式即可。
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
