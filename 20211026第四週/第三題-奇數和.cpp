/*
給你一個範圍 a 到 b ，請你找出 a 與 b 之間所有奇數的和。例如：範圍 [2, 10] 中所有奇數的和就是 3 + 5 + 7 + 9 = 24 。請使用while迴圈完成。

輸入說明：根據題目輸入兩個整數。


輸出說明：根據題意，輸出所有奇數的和(行尾記得換行)。


範例輸入：
2 10


範例輸出：
24
*/

#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	int c;
	cin>>a>>b;
	c=0;
	while(a<=b){
		if(a%2==1){
			c=c+a;
		}
		a++;
	}
	cout<<c<<endl;
}
