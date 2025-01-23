/*
計算三位數的個位、十位和百位之總和。

輸入說明：輸入一個三位數的整數。

輸出說明：根據題意，輸出總和。

範例輸入：
487

範例輸出：
19

*/

#include <iostream>
using namespace std;
int main() {
	int a1=0;
	int z;
	cin>>a1;
	for(int i=0;i<3;i++){
		z=z+a1%10;
		a1=a1/10;
	}
	cout<<z<<endl;
}
