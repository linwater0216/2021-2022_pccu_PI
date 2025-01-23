/*
請撰寫一個函式int sqrfloor(int n)，該函式接收一正整數n，計算並傳回小於等於n且最接近n的完全平方數k(完全平方數：開根號為正整數之數)。如sqrfloor(5)則傳回4；sqrfloor(9)則傳回9。不限制是否使用數學函式庫，可自由選擇。

※ 請配合main函式執行，main函式請勿修改

*/

#include <iostream>
#include <cmath>
using namespace std;

int sqrfloor(int n){
	int a,b,c;
	for(;n>0;n--){
		c=sqrt(n);
		if(c*c==n){
			return n;
		}
	}
}

int main(){
    int num;
    cin >> num;
    cout << sqrfloor(num)<<endl;
}
