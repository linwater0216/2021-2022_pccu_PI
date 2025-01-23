/*
利用餘數概念計算將一個數字轉換為二進位

輸入說明：輸入一個1~15之間數字。

輸出說明：根據題意，輸出該數字的二進位值。

範例輸入：
7

範例輸出：
0111

*/

#include <iostream>
using namespace std;
int main() {
	int a=0;
	int w=0,x=0,y=0,z=0;
	cin>>a;
	w=a%2;
	a=a/2;
	x=a%2;
	a=a/2;
	y=a%2;
	a=a/2;
	z=a%2;
	cout<<z<<y<<x<<w<<endl;
}
