/*
main�禡�w��J�Y�Z�{���]�p�Ҹզ��Z�ܰ}�Cscore�A�аѦҽҥ��d�Ҽ��g�禡maximum, minimum, average�H�p��Z�W�̰����A�̧C���A�H�Υ��Z�����C



�� �аt�Xmain�禡����Amain�禡�Фŭק�
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
