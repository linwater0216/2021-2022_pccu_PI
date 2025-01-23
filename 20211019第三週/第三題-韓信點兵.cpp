/*相傳韓信才智過人，
從不直接清點自己軍隊的人數，
只要讓士兵先後以三人一排、
五人一排、七 人一排地變換隊形，
而他每次只看一眼隊伍的排尾(餘數)就知道總人數。
輸入三個非負整數 a、b、 c，
表示每種隊形排尾的人數(a<3, b<5,c<7)，
程式將輸出總人數的最小值(或報告無解)。
已知總人數不小於 10，
不超過 100。
倘若無解，
請輸出『No answer』。
運用while迴圈完成本題。

輸入說明：根據題目輸入三個非負整數。

輸出說明：根據題意，輸出總人數的最小值(行尾記得換行)。

範例輸入(1)：
2 1 6

範例輸出(1)：
41

範例輸入(2)：
2 1 3

範例輸出(2)：
No answer
*/
#include<iostream>
using namespace std;
int main(){
    int A;
    int B;
    int C;
    int D;
	cin>>A;//3
	cin>>B;//5
	cin>>C;//7
	D=10;
	while(!(D%3==A && D%5==B &&D%7==C)){
		D=D+1;
	}
	if(D>=100){
		cout<<"No answer"<<endl;
	}else{
		cout<<D<<endl;
	}
	
}
