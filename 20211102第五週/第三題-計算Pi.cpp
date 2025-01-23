/*
Pi值無窮級數為 Pi=4-4/3+4/5-4/7+4/9-4/11+…，請設計程式輸入一個數n，顯示計算至此級數第n項的π的近似值，請使用for迴圈完成。(請輸出至小數點後八位)

輸入說明：根據題目輸入第一個整數。

輸出說明：根據題意，輸出第n項的π的近似值(行尾記得換行)。

範例輸入：
10

範例輸出：
3.04183962
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a;
	int b;
	double c;
	double d=0;
	cin>>a;
	for(int i=1;i<=a;i++){
		if(i%2==1){
			c=4.0/(i*2-1);
		}
		if(i%2==0){ 
			c=-4.0/(i*2-1);
		}
		d=d+c;
	}
	cout<<fixed<<setprecision(8)<<d<<endl;
//	cout<<c;
}
