/*
main函式已輸入某班程式設計考試成績至陣列score，請參考課本範例撰寫函式maximum, minimum, average以計算班上最高分，最低分，以及全班平均。



※ 請配合main函式執行，main函式請勿修改
*/

#include <iostream>
#include <iomanip>
using namespace std;
int maximum(int score[],int arraySize){
	int max;
	max=score[1];
	for(int i=0;i<arraySize;i++){
		if(score[i]>max){
			max=score[i];
		}
	}
	return max;
}
int minimum(int score[],int arraySize){
	int min=score[0];
	for(int i=0;i<arraySize;i++){
		if(score[i]<min){
			min=score[i];
		}
	}
	return min;
}
double average(int score[],int arraySize){
	double total=0;
	for(int i=0;i<arraySize;i++){
		total+=score[i];
	}
	return total/100.0;
}

int main(){
	const int arraySize=100; 
	int score[arraySize];
	for(int i=0;i<arraySize;i++){
		cin>>score[i];
	}
	cout<<maximum(score,arraySize)<<endl;
	cout<<minimum(score,arraySize)<<endl;
	cout<<fixed<<setprecision(2)<<average(score, arraySize)<<endl;
}
