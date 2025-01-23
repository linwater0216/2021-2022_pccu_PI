/*試撰寫一個程式，輸入一個 4 位數的整數，代表西元的年份，然後判斷是否為閏年。

閏年判斷方法：1. 可以被4整除但不可以被100整除。 2. 可以被400整除。

輸入說明：輸入一 4 位數的整數，表示西元年份。(請不須考慮例外狀況)

輸出說明：根據題意，輸出 is LeapYear 或 is CommonYear，結尾請記得換行。

範例輸入：
2019

範例輸出：
2019 is CommonYear

*/

#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a%4==0&&a%100!=0||a%400==0){
    	cout<<a<<" is LeapYear"<<endl;
	}
	else{
		cout<<a<<" is CommonYear"<<endl;
	}
}
