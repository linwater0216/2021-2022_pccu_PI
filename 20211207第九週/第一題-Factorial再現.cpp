/*

請撰寫一個遞迴函式int Factorial(int n)，該函式接收一正整數n，計算並傳回n!之值。如Factorial(5)則傳回120。請使用遞迴完成，請勿使用迴圈方式。

※ 請配合main函式執行，main函式請勿修改


*/

#include <iostream>
#include <iomanip>
using namespace std;

int Factorial(int n){
	if( n == 0 )
        return 1;
    if( n >= 1 )
        return n*Factorial(n-1);
}

int main(){
	int number;
	for(int i=0; i<10; i++){
		cin >> number;
		cout << Factorial(number)<<endl;
	}
	return 0;
}
