/*
請設計一個使用for敘述的程式，能夠找出幾個整數的最小值。假設讀取的第一個數字代表後續數字的個數。

輸入說明：根據題目輸入第一個整數為後續數字的個數，之後輸入其個數之所有整數。

輸出說明：根據題意，輸出所有數中最小值(行尾記得換行)。

範例輸入：
6 10 3 15 21 26 14

範例輸出：
3

*/

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a;
	int b,c;
	cin>>a;
	b=9999999999999;
	for(int i=1;i<=a;i++){
		cin>>c;
//		cout<<a<<endl;

		if(c<b){
			b=c;
		}
		
	}
	cout<<b<<endl;
}
