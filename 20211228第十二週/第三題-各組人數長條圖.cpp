/*
main�禡�w��J�Y�Z�{���]�p�Ҹզ��Z�ܰ}�Cscore�A�м��g�禡barchart�H�̧�(�ۤ��ƧC�ܰ�����)�b�禡���L�X�U�դH�ƪ����ϡC



�� �аt�Xmain�禡����Amain�禡�Фŭק�



�d�ҿ�X�G

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
