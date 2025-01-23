/*

一家郵購公司銷售五種不同的產品，其零售價格分別是：產品1─$2.98，產品2─$4.50，產品3─$9.98，產品4─$4.49和產品5─$6.87。請你設計一個程式，能夠讀取一連串數字配對：

a) 產品編號
b) 銷售量

您的程式應該使用switch敘述，以判定各個產品的零售價格。您的程式應計算並顯示上一週所有售出產品的總零售價格。使用一個警示控制迴圈，決定何時該終止程式並顯示最後的結果。

輸入說明：依序產品編號以及銷售量，直到產品編號輸入-1結束。

輸出說明：前五個數字分別為產品1至產品5的個別總價，第6個數字為所有產品之總價。

範例輸入(依序為產品1銷售量 5、產品3銷售量 2、產品4銷售量 2、產品1銷售量 1)：
1 5 3 2 4 2 1 1 -1

範例輸出：
17.88 0.00 19.96 8.98 0.00 46.82

*/


#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a;
	double b,c,d,a1=0,a2=0,a3=0,a4=0,a5=0;
	c=0;
	a=0;
	d=1;
	while(a!=-1){
		cin>>a;
		if(a==-1){
			break;
		}
		switch(a){
			case 1: 
	            cin>>b;
	            a1=a1+2.98*b;
	            c=c+2.98*b;
	            d++;
	            break;
	        case 2: 
	            cin>>b;
	            a2=a2+4.50*b;
	            c=c+4.50*b;
	            d++;
	            break;
	        case 3: 
	            cin>>b;
	            a3=a3+9.98*b;
	            c=c+9.98*b;
	            d++;
	            break;
	        case 4: 
	            cin>>b;
	            a4=a4+4.49*b;
	            c=c+4.49*b;
	            d++;
	            break;
	        case 5: 
	            cin>>b;
	            a5=a5+6.87*b;
	            c=c+6.87*b;
	            d++;
	            break;
	        default:
	        	break;
		}
	}
	
	cout<<fixed<<setprecision(2)<<a1<<a2<<a3<<a4<<a5<<c<<endl;
}
