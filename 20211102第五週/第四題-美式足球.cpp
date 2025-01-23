/*
美式足球又來啦！觀眾們在中場休息想要打發時間，所以大家決定來下注結果分數會是如何。下注的規則是兩隊最後的分數加總，或者兩隊最後分數相差的絕對值。 請撰寫一支程式，給2個值，並請你用程式推出這2隊最後的得分是多少。

輸入說明：輸入的第一個值有一個整數，代表以下有多少組測試資料。每組測試資料有2個大於等於 0 的整數假設分別為 s 與 d，s 代表比賽結束時2隊分數的總和， d 代表比賽結束時2隊分數差的絕對值，請使用for迴圈完成。

輸出說明：根據題意，每組測試資料輸出一列，包含2個整數，分別代表比賽結束時這2隊的分數，分數大的在前、分數小的在後。如果沒有這樣的分數或是某隊分數為負數，請輸出「impossible」。

※請注意：美式足球的分數一定是大於等於 0 的整數。

範例輸入：
2
40 20
20 40

範例輸出：
30 10
impossible
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a,b,c;
	cin>>c;
	for(int i=0;i<c;i++){
		cin>>a>>b;
		if(b>a){
			cout<<"impossible"<<endl;
		}
		else{
			cout<<(a+b)/2<<" "<<(a+b)/2-b<<endl;
		}
	}
}



