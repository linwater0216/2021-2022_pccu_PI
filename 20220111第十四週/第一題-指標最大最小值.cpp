/*
請撰寫一個函式maxmin(int a, int b, int c, int*maxPtr, int*minPtr)，該函式將計算a, b, c中之最大值與最小值，並利用參數maxPtr與minPtr傳回。



※ 請配合main函式執行，main函式請勿修改
*/
#include<iostream>
using namespace std;
void maxmin(int a,int b,int c,int *maxPtr,int *minPtr){
	//max
	if(a>b&&a>c){
		*maxPtr=a;
	}
	if(b>a&&b>c){
		*maxPtr=b;
	}
	if(c>b&&c>a){
		*maxPtr=c;
	}
	//min
	if(a<b&&a<c){
		*minPtr=a;
	}
	if(b<a&&b<c){
		*minPtr=b;
	}
	if(c<b&&c<a){
		*minPtr=c;
	}
}

int main(){
	int max,min;
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	maxmin(n1,n2,n3,&max,&min);
	cout<<max<<" "<<min<<endl;
	system("PAUSE");
}
