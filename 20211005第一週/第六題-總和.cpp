/*
請試著寫一支程式，當使用者輸入一個整數 n ( 0 < n < 100 ) ，印出 1 到 n 之間所有的數字的總和(此題請使用公式)。

輸入說明：輸入一個整數。

輸出說明：根據題意，輸出總和。

範例輸入：
10

範例輸出：
55


*/

#include <iostream>
using namespace std;
int main() {
	int a=0,z=0;
	cin>>a;
	for(int i=1;i<=a;i++){
		z=z+i;
	}
	cout<<z<<endl;
}
