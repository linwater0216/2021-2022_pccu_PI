/*
main�禡�w��J�Y�Z�{���]�p�Ҹզ��Z�ܰ}�Cscore�A�м��g�禡verticalbar�H�έp�U�նZ(0-9, 10-19, �K,90-99, 100)�H�ơA�ȩ̀�(�ѥ��ܥk�ۤ��ƧC�ܰ�����)�L�X�U�դH�ƫ��������ϡC



�� �аt�Xmain�禡����Amain�禡�Фŭק�



�d�ҿ�X(�����C����b�Y)�G
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
