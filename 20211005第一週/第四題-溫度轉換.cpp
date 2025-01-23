/*
計算將溫度轉換後之值 (公式：華氏溫度 = 32 + 9 * 攝氏溫度 / 5)。

輸入說明：輸入一個華氏溫度(整數即可)。

輸出說明：根據題意，輸出攝氏溫度，並請顯示至小數點後3位。

範例輸入：
38

範例輸出：
3.333


*/

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double a1=0;
	double z=0;
	cin>>a1;
	z=(a1-32)*5/9;
	cout<<fixed<<setprecision(3)<<z<<endl;
}
