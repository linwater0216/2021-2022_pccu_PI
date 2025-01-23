/*2
main函式已輸入某班程式設計考試成績至陣列score，請撰寫函式verticalbar以統計各組距(0-9, 10-19, …,90-99, 100)人數，並依序(由左至右自分數低至高的組)印出各組人數垂直長條圖。



※ 請配合main函式執行，main函式請勿修改



範例輸出(忽略每行後方箭頭)：
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
