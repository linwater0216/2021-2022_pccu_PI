/*
請撰寫一個函式int factorial(int n)，該函式接收一正整數n，計算並傳回n!之值。如factorial(5)則傳回120。請使用for迴圈完成，請勿使用遞迴或任何非迴圈方式。

※ 請配合main函式執行，main函式請勿修改

*/


#include <iostream>
using namespace std;

int factorial(int n){
	int b;
	b=1;
	for(;n>0;n--){
		b=b*n;
	}
	return b;
}


int main(){
    int num;
    cin >> num;
    cout << factorial(num)<<endl;
}
