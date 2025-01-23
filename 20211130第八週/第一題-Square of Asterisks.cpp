/*
請寫出一個函式void square( int side )，該函式在螢幕的左邊用星號畫出一個實心正方形，其邊長是由整數參數side指定。並撰寫適當主函式讓使用者輸入邊長。例如，如果使用者輸入4，呼叫函式後會顯示以下圖形：

****
****
****
****

※ 請配合main函式執行，main函式請勿修改


*/


#include <iostream>
using namespace std;
void square(int side){
	int a,b,c,d;
	for(a=1;a<=side;a++){
		for(b=1;b<=side;b++){
			cout<<'*';
		}
		cout<<endl;
	}
	
}

int main(){
  int side;
  cin>>side;
  square(side);
}
