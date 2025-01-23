/*
一組未知的三角形可以有各式各樣不同的角度和方向，請設計程式輸入三角形編號，以及三角形之高度，並判斷編號輸出對應高度和方向的三角形，三角形部分請以『 * 』輸出，其餘部分請以『 - 』(減號) 輸出。請不需考慮例外狀況。

範例輸入(1)：
1 7

範例輸出(1)：
*------
**-----
***----
****---
*****--
******-
*******

範例輸入(2)：
2 7

範例輸出(2)：
*******
******-
*****--
****---
***----
**-----
*------

範例輸入(3)：
3 7



範例輸出(3)：
------*
-----**
----***
---****
--*****
-******
*******

範例輸入(4)：
4 7

範例輸出(4)：
*******
-******
--*****
---****
----***
-----**
------*


*/

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	switch(a){
		case 1:
			for(int i=1;i<=b;i++){
				for(int j=1;j<=b;j++){
					if(i>=j){
						cout<<"*";
					}
					else{
						cout<<"-";
					}
				}
				cout<<endl;
			}
			break;
		case 2:
			for(int i=1;i<=b;i++){
				for(int j=1;j<=b;j++){
					if(i+j<=b+1){
						cout<<"*";
					}
					else{
						cout<<"-";
					}
				}
				cout<<endl;
			}
			break;
		case 3:
			for(int i=1;i<=b;i++){
				for(int j=1;j<=b;j++){
					if(i+j>=b+1){
						cout<<"*";
					}
					else{
						cout<<"-";
					}
				}
				cout<<endl;
			}
			break;
		case 4:
			for(int i=1;i<=b;i++){
				for(int j=1;j<=b;j++){
					if(i<=j){
						cout<<"*";
					}
					else{
						cout<<"-";
					}
				}
				cout<<endl;
			}
			break;
		
	}
}
