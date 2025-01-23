/*
叫皌mainㄧΑ磅︽mainㄧΑ叫づэ度级糶ㄧΑ﹚竡籔ㄧΑ

(程そ计) ㄢ俱计程そ计 (greatest common divisorGCD) 琌盢ㄢ俱计常俱埃程俱计叫级糶ㄧΑgcdтㄢ俱计程そ计

“ 某ㄏノ劣锣埃猭
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
