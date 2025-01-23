/*
將輸入三角形三邊長度值，並請撰寫一支程式使用 if...else 判斷它是否能構成為直角三角形的三個邊長。

輸入說明：輸入3個正整數值(int)。

輸出說明：請根據題意，如果可以構成直角三角形，則輸出「It is a right triangle.」，如果不能構成，則輸出「It is not a right triangle.」。如果根本無法構成三角形，則輸出「Not a triangle.」

範例輸入(1)：
1 1 0

範例輸出(1)：
Not a triangle.

範例輸入(2)：
3 4 5

範例輸出(2)：
It is a right triangle.
*/


#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>c&&a+c>b&&b+c>a){
		if(a*a+b*b==c*c||c*c+a*a==b*b||c*c+b*b==a*a){
			cout<<"It is a right triangle."<<endl;
		}
		else{
			cout<<"It is not a right triangle."<<endl;
		}
	}
	else{
		cout<<"Not a triangle."<<endl;
	}
	}
