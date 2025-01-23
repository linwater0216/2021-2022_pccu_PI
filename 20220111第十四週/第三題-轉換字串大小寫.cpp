/*
輸入一個由英文字母所組成的字串，將其中的小寫字母轉換成大寫字母後輸出。


輸入說明：輸入一個字串(string)，該字串僅由英文大小寫字母所組成，無需考慮例外狀況。

輸出說明：根據題意，將其中的小寫字母轉換成大寫字母，並印出。


範例輸入：
ABcDEfgHiJk

範例輸出：
ABCDEFGHIJK

*/

#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    char string[100];
    cin.getline(string,100);
    
    for(int i=0; i<100 && string[i]!=NULL;i++){
         if(int(string[i])>='A' && int(string[i])<='Z'){
         	cout<<string[i];
         }
		 else if(int(string[i])>='a' && int(string[i])<='z'){
		 	string[i]=string[i]-32;
			cout<<string[i];
         }
    }
    return 0;
}
