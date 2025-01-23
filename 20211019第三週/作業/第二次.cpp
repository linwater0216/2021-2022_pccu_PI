#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	char yn[1];
	char num[1];
	char enlsh[1];
	int numin;
	int numout;
	cin >>yn[0]>>num[0]>>enlsh[0]>>numin;
//	cout<<yn[0]<<num[0]<<enlsh[0]<<numin<<endl;
	int i=atol(num);

	while(numin>0){
		numout=numout+1;
		numin=numin/10;
	}
 
	if(enlsh[0]<'A'||enlsh[0]>'Z'){
		cout<<"input error!"<<endl;
	}
	else{
	if(yn[0]=='+'){
    if(enlsh[0]+i>=90)
    {
        printf("%c%lu\n",(enlsh[0]+i-26),numout);
        	cout<<"123456789";
        cout<<endl;
    }
    else{
	printf("%c%lu\n",enlsh[0]+i,numout);
	cout<<endl;
//			cout<<enlsh[0];
	}
}
    else{
	if(enlsh[0]-i<=65)
    {
        printf("%c%lu\n",(enlsh[0]-i+26),numout);
        cout<<endl;
    }
    else {
    	printf("%c%lu\n",enlsh[0]-i,numout);
    	cout<<endl;
	}
	cout<<enlsh[0];
}
}
}
