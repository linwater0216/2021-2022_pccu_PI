/*

請撰寫一個遞迴函式int gcd(int n, int m)，該函式接兩正整數n、m，計算兩數最大公因數之值。如gcd(12, 18)則傳回6。請使用遞迴完成，請勿使用迴圈方式。

※ 請配合main函式執行，main函式請勿修改


*/

#include <iostream>
#include <iomanip>
using namespace std;
int gcd(int n, int m){
	if(m == 0) {
        return n; 
    } 
    else { 
        return gcd(m, n % m); 
    }
}

int main()
{
	int num_1, num_2;

	for(int i=0; i<10; i++)
	{
		cin >> num_1 >> num_2;
		cout << gcd(num_1, num_2) << endl;
	}

	return 0;
}
