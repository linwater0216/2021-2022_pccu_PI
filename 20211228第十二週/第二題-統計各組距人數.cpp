/*
main函式已輸入某班程式設計考試成績至陣列score，請撰寫函式distribution以統計各組距(0-9, 10-19, …,90-99, 100)人數，並在函式內依序(自分數低至高的組)印出各組距統計結果。



※ 請配合main函式執行，main函式請勿修改



輸出範例：

12 8 8 6 7 0 16 12 11 9 2

*/

#include <iostream>
#include <iomanip>
using namespace std;
void distribution(int score[],int arraySize){
	int a[11]={0};
	for(int i=0;i<arraySize;i++){
		a[score[i]/10] += 1;
	}
	for(int i=0;i<11;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
}
int main(){
	const int arraySize=100; 
	int score[arraySize];
	for(int i=0;i<arraySize;i++){
		cin>>score[i];
	}
	distribution(score, arraySize);
}
