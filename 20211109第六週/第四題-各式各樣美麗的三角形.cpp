/*
�@�ե������T���Υi�H���U���U�ˤ��P�����שM��V�A�г]�p�{����J�T���νs���A�H�ΤT���Τ����סA�çP�_�s����X�������שM��V���T���ΡA�T���γ����ХH�y * �z��X�A��l�����ХH�y - �z(�) ��X�C�Ф��ݦҼ{�ҥ~���p�C

�d�ҿ�J(1)�G
1 7

�d�ҿ�X(1)�G
*------
**-----
***----
****---
*****--
******-
*******

�d�ҿ�J(2)�G
2 7

�d�ҿ�X(2)�G
*******
******-
*****--
****---
***----
**-----
*------

�d�ҿ�J(3)�G
3 7



�d�ҿ�X(3)�G
------*
-----**
----***
---****
--*****
-******
*******

�d�ҿ�J(4)�G
4 7

�d�ҿ�X(4)�G
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
