/*
將會輸入一個值，並請撰寫一支程式判斷其是否為質數。

輸入說明：輸入一個正整數(int)。

輸出說明：請根據題意，使用 for 迴圈與 if...else 判斷其是否為質數，如果是質數，則輸出「It is a prime number.」，否則輸出「It is not a prime number.」，其餘例外狀況不需考慮。

範例輸入(1)：
3559

範例輸出(1)：
It is a prime number.

範例輸入(2)：
3558

範例輸出(2)：
It is not a prime number.
*/


#include<iostream>
using namespace std;
int main(){
	int a,b,z;
	cin>>z;
	b=0;
	for(a=1;z>a;a++){
		if(z%a==0){
			b++;
		}
	}
	if(b>1){
		cout<<"It is not a prime number."<<endl;
	}
	else{
		cout<<"It is a prime number."<<endl;
	}
}
