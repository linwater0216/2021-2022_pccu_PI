/*

�м��g�@�ӻ��j�禡int gcd(int n, int m)�A�Ө禡���⥿���n�Bm�A�p���Ƴ̤j���]�Ƥ��ȡC�pgcd(12, 18)�h�Ǧ^6�C�Шϥλ��j�����A�ФŨϥΰj��覡�C

�� �аt�Xmain�禡����Amain�禡�Фŭק�


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
