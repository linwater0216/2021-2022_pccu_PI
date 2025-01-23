/*
(去掉極端值後平均)寫一個函式，該函式接收五個成績(0-100的整數)，然後忽略最大和最小的成績，取中間3個成績平均後傳回。

注意：若最大或最小成績有兩個以上，只忽略一個成績不計入平均。
函式原形： double average(int, int, int, int, int)

Write a function that takes five integer values between 0 and 100

and returns the average of the remaining three values after discarding The top one value and the bottom one.

function prototype: double average(int, int, int, int, int)

撰寫下列函式並配合所給主程式執行，請自行含括所需之標頭檔。

*/ 

#include<iostream>
#include<iomanip>
using namespace std;
double average(int a,int b,int c,int d,int e){
	double t;
	int min=a,max=a;
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	if(d>max){
		max=d;
	}
	if(e>max){
		max=e;
	}
	if(b<min){
		min=b;
	}
	if(c<min){
		min=c;
	}
	if(d<min){
		min=d;
	}
	if(e<min){
		min=e;
	}
	t=(a+b+c+d+e-max-min)/3;
	return t;
}

int main(){
    int a1,a2,a3,a4,a5;
    cin >> a1 >> a2 >> a3 >>a4 >> a5;
    cout<<a1<<endl;
	cout<<a2<<endl;
	cout<<a3<<endl;
	cout<<a4<<endl;
	cout<<a5<<endl;
    cout<<setprecision(2)<<fixed<<average(a1,a2,a3,a4,a5)<<endl;
    
}
