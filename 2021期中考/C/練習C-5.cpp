/*
Τ计盞筁祘盢–计だ4礛盢计埃10┮眔緇计穝计ㄓ计礛盢材计㎝材计ユ传材计㎝材计ユ传

块弧块计タ俱计(int)计Ч盞计

块弧叫沮肈種ぃ惠σ納ヴㄒ猵糶秆盞祘Α

絛ㄒ块
1234

絛ㄒ块
8765

*/


#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,z;
	cin>>z;
	a=z/10/10/10%10;
	b=z/10/10%10;
	c=z/10%10;
	d=z%10;
	a=(a+4)%10;
	b=(b+4)%10;
	c=(c+4)%10;
	d=(d+4)%10;
	e=d*1000+c*100+b*10+a;
	cout<<e<<endl;
}
