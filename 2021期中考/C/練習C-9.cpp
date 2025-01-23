/*
將會輸入8位數的值，並請利用switch撰寫一支程式對應以下表格換算該數值並加總，遇到0則所有數乘以(-1)後運算。

對應表:
1 | +9
2 | +8
3 | +7
4 | +6
5 | +5
6 | +4
7 | +3
8 | +2
9 | +1

輸入說明：輸入8位正整數值(int)。

輸出說明：請根據題意，不需考慮任何例外狀況，對應表格輸出總和。

範例輸入：
14089036

範例輸出：
23

範例運算：
9 + 6 + 2*(-1) + 1*(-1) + 7*(-1) *(-1) + 4*(-1) *(-1)


*/


#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,z;
	cin>>z;
	a=0;
	for(;z>0;z/10){
		b=z%10;
		switch(b){
			case 1:
				a=a+9;
				break;
			case 2:
				a=a+8;
				break;
			case 3:
				a=a+7;
				break;
			case 4:
				a=a+6;
				break;
			case 5:
				a=a+5;
				break;
			case 6:
				a=a+4;
				break;
			case 7:
				a=a+3;
				break;
			case 8:
				a=a+2;
				break;
			case 9:
				a=a+1;
				break;
			
		} 
	}
	cout<<a<<endl;
}
