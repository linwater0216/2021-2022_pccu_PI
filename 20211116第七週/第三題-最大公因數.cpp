/*
�аt�Xmain�禡����Amain�禡�Фŭק�A�ȼ��g�禡�w�q�P�禡�쫬

(�̤j���]��) ��Ӿ�ƪ��̤j���]�� (greatest common divisor�AGCD) �O��N���Ƴ��㰣���̤j��ơC�м��g�禡gcd�A��X��Ӿ�ƪ��̤j���]�ơC

�� ��ĳ�ϥ�����۰��k
*/
#include <iostream>
using namespace std;

int gcd(int a,int b){
    int max;
    if(a>b){
        max=a;
    }
    else{
        max=b;
    }
    for(;max>0;max--){
        if(a%max==0&&b%max==0){
            return max;
        }
    }
}
int main(){
   int a;
   int b;

   for ( int j = 1; j <= 5; j++ ) 
   {
      cin >> a >> b;
    //   cout<<a<<endl<<b<<endl;
      cout <<  gcd( a, b ) << endl;
   }
}
