/*一般來說，男子的標準體重為(身高-80)*0.7；女子的標準體重為(身高-70)*0.6；請撰寫程式計算其標準體重。

輸入說明：輸入兩個數值(皆為整數)，依序代表為身高及性別（1代表男子；2代表女子，請不須考慮例外狀況）。

輸出說明：根據題意，輸出標準體重，浮點數取至第一位 。

(注意數字都是半形)

範例輸入：
172 1

範例輸出：
64.4

*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double A;
    double B;
    cin>>A;
    cin>>B;
    if(B==1){
        A=(A-80)*0.7;
        cout<<fixed<<setprecision(1)<<A;
    }
    else{
       A=(A-70)*0.6;
        cout<<fixed<<setprecision(1)<<A;
    }
}
