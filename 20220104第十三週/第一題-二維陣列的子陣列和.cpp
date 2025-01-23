
/*
題目：一個二維陣列的子矩形陣列之定義為二維陣列的大小為1*1以上的子陣列，（即是在二維陣列上任意畫出一個矩形區域所包圍的子陣列）。


0 -2 -7 0

9 2 -6 2

-4 1 -4 1

-1 8 0 -2


例如以下陣列即為上面陣列的子矩形陣列(自左上元素[0][0]至右下元素[1][3]的矩形)。


0 -2 -7 0

9 2 -6 2


今給一個4*4的二維陣列以及子矩形陣列的左上點(列、行)及右下點(列、行)，請撰寫函式sumOfElements計算並傳回該子矩形陣列的元素和。

※ 請配合main函式執行，main函式請勿修改


輸入說明：20個以空白隔開的整數，前16個代表此4*4的二維陣列，以列為主。陣列元素的值在-128至127之間（包含端點）。後4個代表此子矩形陣列的左上點(列、行)及右下點(列、行)，例如0 0 1 3 表示由左上元素[0][0]至右下元素[1][3]間的子矩形陣列。

輸出說明：透過sumOfElements函式將子矩形陣列相加後輸出。


範例輸入：
0 -2 -7 0 9 2 -6 2 -4 1 -4 1 -1 8 0 -2 0 0 1 3


範例輸出：
-2
*/
#include <iostream>
#include <iomanip>
using namespace std;
const int rows=4;
const int columns=4;

int sumOfElements(int array[rows][columns],int tl_row,int tl_column,int dr_row,int dr_column){
	int total=0;
	for(int i=tl_row;i<=dr_row;i++){
		for(int j=tl_column;j<=dr_column;j++){
			total=total+array[i][j];
		}
	}
	return total;
}
int main(){
	int array[rows][columns];
	int tl_row, tl_column, dr_row, dr_column;
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
		   cin >> array[i][j];
		}
	}
	cin >> tl_row>>tl_column>>dr_row>>dr_column;
	
	cout<<sumOfElements(array, tl_row, tl_column, dr_row, dr_column);
	
}
