/*
將會輸入一個值，並請撰寫一支程式輸出該數的所有正因數並統計其個數。

輸入說明：輸入 1 個正整數值(int)。

輸出說明：請根據題意，不需考慮任何例外狀況，輸出該數的所有正因數並統計其個數，輸出的符號與字皆為半形字。

範例輸入：
6

範例輸出：
1 2 3 6
Total:4
*/


#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,z;
	b=0;
	cin>>z;
	for(a=1;a<=z;a++){
		if(z%a==0){
			cout<<a;
			b++;
		}
	}
	cout<<endl<<"Total:"<<b<<endl;
}
