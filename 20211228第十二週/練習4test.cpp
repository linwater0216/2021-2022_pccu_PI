/*
main函式已輸入某班程式設計考試成績至陣列score，請撰寫函式verticalbar以統計各組距(0-9, 10-19, …,90-99, 100)人數，並依序(由左至右自分數低至高的組)印出各組人數垂直長條圖。



※ 請配合main函式執行，main函式請勿修改



範例輸出(忽略每行後方箭頭)：
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int max=10,a=3,b=2,c=5;
	int high = max;

for (int i = high; i > 0; i--){
    if (i <= a)
        cout << " * ";
    else
        cout << "   ";

    if (i <= b)
        cout << " * ";
    else
        cout << "   ";

    if (i <= c)
        cout << " * ";
    else
        cout << "   ";

    cout << endl;
}
}
