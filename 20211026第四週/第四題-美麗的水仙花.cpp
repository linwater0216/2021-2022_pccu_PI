/*
請輸入兩個整數，兩數介於100～999之間，輸出兩數之間所有的水仙花數與個數。若三位數 abc 滿足abc=a3+b3+c3，則稱其為水仙花數。例如153=13+53+33，所以 153 為水仙花數。請使用while迴圈完成，請勿使用數學函式庫。

輸入說明：根據題目輸入兩個整數。

輸出說明：根據題意，輸出兩數之間所有的水仙花數與個數(行尾記得換行)。

範例輸入：
100 400

範例輸出：
153
370
371
Total:3
*/

#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f;
	f=0;
	cin>>a>>b;
	while(a<=b){
		c=a/100%10;
		d=a/10%10;
		e=a%10;
		if(a==(d*d*d+e*e*e+c*c*c)){
			cout<<a<<endl;
			f++;
		}
		a++;
	}
	cout<<"Total:"<<f<<endl;
}
