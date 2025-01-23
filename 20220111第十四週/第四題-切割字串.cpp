/*
輸入一個由英文字母所組成的特殊字串，字串中可能包含 /n、/t、/c、/b、/f 五種符號，請計算其出現個數。


輸入說明：輸入一個字串(string)，該字串僅由英文大小寫字母與特殊字符所組成，無需考慮例外狀況。

輸出說明：根據題意，計算符號之個數。


範例輸入：
Today/nis/ca/tniceday

範例輸出：
3

*/
#include<string>
#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int z=0;
    string n;
    cin>>n;
    for(int i=0;i<n.size();i++){
    	if(n[i]=='/'&&n[i+1]=='n'||n[i]=='/'&&n[i+1]=='t'||n[i]=='/'&&n[i+1]=='c'||n[i]=='/'&&n[i+1]=='b'||n[i]=='/'&&n[i+1]=='f'){
    		z++;
		}
	}
	cout<<z<<endl;
}
