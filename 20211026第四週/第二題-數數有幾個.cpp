/*
輸入一個不超過9位數的正整數，請輸出它的位數。例如：12735的位數是5、0的位數是0。請不要使用任何數學函數，只使用算數運算和while迴圈。

輸入說明：根據題目輸入一個整數。

輸出說明：根據題意，輸出數字的位數(行尾記得換行)。

範例輸入：

6669487

範例輸出：

7
*/

#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	cin>>a;
	while(a>0){
		a=a/10;
		b++;
	}
	cout<<b;
}
