/*
輸入一個由英文字母所組成的字串，找出字串中大寫字母與小寫字母的個數。


輸入說明：輸入一個字串(string)，該字串僅由英文大小寫字母所組成，無需考慮例外狀況。

輸出說明：根據題意，依序印出大寫字母與小寫字母的個數。


範例輸入：
ABcDEfgHiJk

範例輸出：
6 5
*/

#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int big=0;
	int small=0;
    char string[100];
    cin.getline(string,100);
    for(int i=0; i<100 && string[i]!=NULL; i++){
         if(int(string[i])>='A' && int(string[i])<='Z'){
         	big=big+1;
         }
		 else if(int(string[i])>='a' && int(string[i])<='z'){
		 	small=small+1;
         }
    }
    cout<<big<<" "<<small<<endl;
    return 0;
}
