//#include <stdio.h>
//#define max(A,B) ( (A)>(B) ?(A) :(B) )
#include <iostream>
#include <iomanip>
using namespace std;
const int rows=4;
const int columns=4;

int getMaxSubArraySum( int *a, int n){
	int max_sum=0;
	int c=0;
	int min_sum=0;
	int s=0;
	int sum=0;
	for( int i=0; i<n; i++) {
		c = (c>0?c:0) + a[i];     // 最大和狀態轉移方程
		max_sum = max( c, max_sum);
	}
	
	return max_sum;
}

int getMaxSubMatrixSum( int *a, int m, int n)
{
	int max_sum=0;
	int sum[m];
	for( int i=0; i<n; i++) {
		for( int j=i; j<n; j++) {
			for( int z=0; z<m; z++) {
				if(j==i){
					sum[z]=0;// j=i 重新計算 sum of a[i..j]
				}
				sum[z]=sum[z]+a[z*n+j];   // 使用偏移, 轉化為二維陣列
			}
			max_sum = max( getMaxSubArraySum(sum,m),max_sum);
		}
	}
	return max_sum;
}

int main()
{
	int array[rows][columns];
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
		   cin >> array[i][j];
		}
	}
	cout<<getMaxSubMatrixSum( (int*)array, rows, columns);
}
