/*
將會輸入6位數的值，並請撰寫一支程式對應以下表格使用switch換算該數值並加總。

對應表:

0 | 99
1 | 88
2 | 77
3 | 66
4 | 55
5 | 44
6 | 33
7 | 22
8 | 11
9 | 0

輸入說明：輸入6位正整數值(int)。

輸出說明：請根據題意，不需考慮任何例外狀況，對應表格輸出總和。

範例輸入：
172674

範例輸出：
297
*/


#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f,g,h;
	e=0;
	cin>>g;
	a=g%10;
	b=g/10%10;
	c=g/10/10%10;
	d=g/10/10/10%10;
	h=g/10/10/10/10%10;
	f=g/10/10/10/10/10%10;
//	cout<<a<<endl;
//	cout<<b<<endl;
//	cout<<c<<endl;
//	cout<<d<<endl;
//	cout<<h<<endl;
//	cout<<f<<endl;
	switch(a){
		case 0:
			e=e+99;
			break;
		case 1:
			e=e+88;
			break;
		case 2:
			e=e+77;
			break;
		case 3:
			e=e+66;
			break;
		case 4:
			e=e+55;
			break;
		case 5:
			e=e+44;
			break;
		case 6:
			e=e+33;
			break;
		case 7:
			e=e+22;
			break;
		case 8:
			e=e+11;
			break;
		case 9:
			e=e+0;
			break;
	}
	switch(b){
		case 0:
			e=e+99;
			break;
		case 1:
			e=e+88;
			break;
		case 2:
			e=e+77;
			break;
		case 3:
			e=e+66;
			break;
		case 4:
			e=e+55;
			break;
		case 5:
			e=e+44;
			break;
		case 6:
			e=e+33;
			break;
		case 7:
			e=e+22;
			break;
		case 8:
			e=e+11;
			break;
		case 9:
			e=e+0;
			break;
	}
	switch(c){
		case 0:
			e=e+99;
			break;
		case 1:
			e=e+88;
			break;
		case 2:
			e=e+77;
			break;
		case 3:
			e=e+66;
			break;
		case 4:
			e=e+55;
			break;
		case 5:
			e=e+44;
			break;
		case 6:
			e=e+33;
			break;
		case 7:
			e=e+22;
			break;
		case 8:
			e=e+11;
			break;
		case 9:
			e=e+0;
			break;
	}
	switch(d){
		case 0:
			e=e+99;
			break;
		case 1:
			e=e+88;
			break;
		case 2:
			e=e+77;
			break;
		case 3:
			e=e+66;
			break;
		case 4:
			e=e+55;
			break;
		case 5:
			e=e+44;
			break;
		case 6:
			e=e+33;
			break;
		case 7:
			e=e+22;
			break;
		case 8:
			e=e+11;
			break;
		case 9:
			e=e+0;
			break;
	}
	switch(h){
		case 0:
			e=e+99;
			break;
		case 1:
			e=e+88;
			break;
		case 2:
			e=e+77;
			break;
		case 3:
			e=e+66;
			break;
		case 4:
			e=e+55;
			break;
		case 5:
			e=e+44;
			break;
		case 6:
			e=e+33;
			break;
		case 7:
			e=e+22;
			break;
		case 8:
			e=e+11;
			break;
		case 9:
			e=e+0;
			break;
	}
	switch(f){
		case 0:
			e=e+99;
			break;
		case 1:
			e=e+88;
			break;
		case 2:
			e=e+77;
			break;
		case 3:
			e=e+66;
			break;
		case 4:
			e=e+55;
			break;
		case 5:
			e=e+44;
			break;
		case 6:
			e=e+33;
			break;
		case 7:
			e=e+22;
			break;
		case 8:
			e=e+11;
			break;
		case 9:
			e=e+0;
			break;
	}
	cout<<e<<endl;
}
