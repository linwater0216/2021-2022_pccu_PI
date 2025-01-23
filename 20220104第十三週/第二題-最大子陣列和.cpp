/*
題目：二維陣列與子陣列概念如上題，請撰寫程式輸入陣列、計算並輸出此陣列的所有子矩形陣列中具有最大元素和之子矩形陣列，以及該子矩形陣列的元素和。


範例輸入：
0 -2 -7 0 9 2 -6 2 -4 1 -4 1 -1 8 0 -2

範例輸出：
15
(因上例中具最大元素和的子矩形陣列[1][0]至[3][1]，其元素和為15)
*/
#include <iostream>
#include <iomanip>

using namespace std;
const int rows=4;
const int columns=4;
int s(int array[rows][columns],int tl_row,int tl_column,int dr_row,int dr_column){
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
	int max;
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
		   cin >> array[i][j];
		}
	}
	max=array[0][0];
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			for(int x=0;x<4;x++){
				for(int z=0;z<4;z++){
					if(s(array,i,j,x,z)>max){
						max=s(array,i,j,x,z);
					}
				}
			}
		}
	}
	cout<<max<<endl;
}
