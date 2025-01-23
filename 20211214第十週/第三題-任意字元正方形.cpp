/*
題目：請寫出一個函式void square(int side, char fillCharacter)，該函式在螢幕的左邊用字元參數fillCharacter畫出一個實心正方形，其邊長是由整數參數side指定。例如，如果使用者輸入邊長5，而字元為’#’，則會印出以下圖形：

#####
#####
#####
#####
#####

※ 請配合main函式執行，main函式請勿修改
*/ 

#include <iostream>
using namespace std;

void square(int side, char fillCharacter){
	int a=side,b=side;
    while(a>0){
    	while(b>0){
    		cout<<fillCharacter;
    		b=b-1;
		}
		a=a-1;
		b=side;
		cout<<endl;
	}
	cout<<endl;
}

int main(){
	int side;
	char fillCharacter;

	cin >> side >> fillCharacter;
	square(side, fillCharacter);
}
