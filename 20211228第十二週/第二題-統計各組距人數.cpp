/*
main�禡�w��J�Y�Z�{���]�p�Ҹզ��Z�ܰ}�Cscore�A�м��g�禡distribution�H�έp�U�նZ(0-9, 10-19, �K,90-99, 100)�H�ơA�æb�禡���̧�(�ۤ��ƧC�ܰ�����)�L�X�U�նZ�έp���G�C



�� �аt�Xmain�禡����Amain�禡�Фŭק�



��X�d�ҡG

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
