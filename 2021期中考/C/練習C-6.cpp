/*
將會輸入一個值，並請撰寫一支程式印出以該數為高度如範例的倒三角形。

輸入說明：輸入正整數n(1 < n <= 10)。

輸出說明：請根據題意，不需考慮任何例外狀況，利用if判斷與for迴圈印出以輸入值為高度的倒三角形，三角形邊長部分請以『 * 』輸出，其餘部分請以『 -』(減號) 輸出，全部符號皆為半形字。

※ 注意：僅可使用以下三個敘述輸出且各用一次 cout <<'*'; cout <<'-'; cout << endl;

範例輸入：
3

範例輸出：
*****
-***
--*

*/

//4
//*******
//-*****
//--***
//---*

#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,x,y,z;
	cin>>z;
	a=z*2-1;
	for(y=1;y<=z;y++){
		for(x=y;x<=a;x++){
			if(x==2&&y==2||x==3&&y==3||x==4&&y==3||x==4&&y==4||x==5&&y==4||x==6&&y==4||x==5&&y==5||x==6&&y==5||x==7&&y==5||x==8&&y==5||x==6&&y==6||x==7&&y==6||x==8&&y==6||x==9&&y==6||x==10&&y==6||x==7&&y==7||x==8&&y==7||x==9&&y==7||x==10&&y==7||x==11&&y==7||x==12&&y==7||x==8&&y==8||x==9&&y==8||x==10&&y==8||x==11&&y==8||x==12&&y==8||x==13&&y==8||x==14&&y==8||x==9&&y==9||x==10&&y==9||x==11&&y==9||x==12&&y==9||x==13&&y==9||x==14&&y==9||x==15&&y==9||x==16&&y==9||x==10&&y==10||x==11&&y==10||x==12&&y==10||x==13&&y==10||x==14&&y==10||x==15&&y==10||x==16&&y==10||x==17&&y==10||x==18&&y==10){
				cout<<'-';
			}
			else{
				cout<<'*';
			}
		}
		cout<<endl;
	}
}
