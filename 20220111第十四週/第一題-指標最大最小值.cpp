/*
�м��g�@�Ө禡maxmin(int a, int b, int c, int*maxPtr, int*minPtr)�A�Ө禡�N�p��a, b, c�����̤j�ȻP�̤p�ȡA�çQ�ΰѼ�maxPtr�PminPtr�Ǧ^�C



�� �аt�Xmain�禡����Amain�禡�Фŭק�
*/
#include<iostream>
using namespace std;
void maxmin(int a,int b,int c,int *maxPtr,int *minPtr){
	//max
	if(a>b&&a>c){
		*maxPtr=a;
	}
	if(b>a&&b>c){
		*maxPtr=b;
	}
	if(c>b&&c>a){
		*maxPtr=c;
	}
	//min
	if(a<b&&a<c){
		*minPtr=a;
	}
	if(b<a&&b<c){
		*minPtr=b;
	}
	if(c<b&&c<a){
		*minPtr=c;
	}
}

int main(){
	int max,min;
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	maxmin(n1,n2,n3,&max,&min);
	cout<<max<<" "<<min<<endl;
	system("PAUSE");
}
