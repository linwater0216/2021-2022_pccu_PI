/*2
main�禡�w��J�Y�Z�{���]�p�Ҹզ��Z�ܰ}�Cscore�A�м��g�禡verticalbar�H�έp�U�նZ(0-9, 10-19, �K,90-99, 100)�H�ơA�ȩ̀�(�ѥ��ܥk�ۤ��ƧC�ܰ�����)�L�X�U�դH�ƫ��������ϡC



�� �аt�Xmain�禡����Amain�禡�Фŭק�



�d�ҿ�X(�����C����b�Y)�G
*/

#include <iostream>
#include <iomanip>
using namespace std;
void verticalbar(int score[],int arraySize){
	int a[11]={0};
	int max=a[0];
	for(int i=0;i<arraySize;i++){
		a[score[i]/10] += 1;
	} 
	for(int i=0;i<11;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	for (;max>0;max--){
		for(int i=0;i<11;i++){
			if(max>a[i]){
				cout << " ";
			}
			else{
				cout << "*";
			}
		}
    cout << endl;
	}
}
int main(){
	const int arraySize=100; 
	int score[arraySize];
	for(int i=0;i<arraySize;i++){
		cin>>score[i];
	}
	verticalbar(score, arraySize);
}
