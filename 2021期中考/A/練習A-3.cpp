/*
將會輸入2個值，並請撰寫一支程式找出這2個數字的最小公倍數，最後輸出。

輸入說明：輸入2個正整數值(int)。

輸出說明：請根據題意，不需考慮任何例外狀況，輸出2個值的最小公倍數(請使用輾轉相除法)。

範例輸入：
12 18

範例輸出：
36

*/




#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b;
	c=1;
	while(c%a!=0||c%b!=0){
		c++;
	}
	cout<<c<<endl;
}
