/*
main函式已輸入某班程式設計考試成績至陣列score，請撰寫函式barchart以依序(自分數低至高的組)在函式內印出各組人數長條圖。



※ 請配合main函式執行，main函式請勿修改



範例輸出：

************
********
********
******
*******
********
****************
************
***********
*********
**

*/

#include <iostream>
using namespace std;
void barchart(int score[],int arraySize){
	int a[11]={0};
	for(int i=0;i<arraySize;i++){
		a[score[i]/10] += 1;
	} 
	for(int i=0;i<11;i++){
		for(int z=0;z<a[i];z++){
			cout<<"*";
		}
		cout<<endl;
	}
}

int main(){
	const int arraySize=100; 
	int score[arraySize];
	for(int i=0;i<arraySize;i++){
		cin>>score[i];
	}
	barchart(score, arraySize);
}
