/*�м��g�{���A��J��Τ���A��X�����P�y�C�P�y����������p�U�G

1 �� 21 �� �� 2 �� 18 �� Aquarius (���~�y)
2 �� 19 �� �� 3 �� 20 �� Pisces (�����y)
3 �� 21 �� �� 4 �� 20 �� Aries (�d�Ϯy)
4 �� 21 �� �� 5 �� 21 �� Taurus (�����y)
5 �� 22 �� �� 6 �� 21 �� Gemini (���l�y)
6 �� 22 �� �� 7 �� 22 �� Cancer (���ɮy)
7 �� 23 �� �� 8 �� 23 �� Leo (��l�y)
8 �� 24 �� �� 9 �� 23 �� Virgo (�B�k�y)
9 �� 24 �� �� 10 �� 23 �� Libra (�ѯ��y)
10 �� 24 �� �� 11 �� 22 �� Scorpio (���Ȯy)
11 �� 23 �� �� 12 �� 21 �� Sagittarius (�g��y)
12 �� 22 �� �� 1 �� 20 �� Capricorn (���~�y)

��J�����G��J��Ӽ�(��ӼƬҬ���ơA���O���u��v�Ρu��v�A�Ф����Ҽ{�ҥ~���p)�C

��X�����G�ھ��D�N�A�N�u��v�Ρu��v�ন�P�y��X�A�����аO�o����C

�d�ҿ�J�G
6 1

�d�ҿ�X�G
Gemini

*/

#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    switch(a){
    	case 1:
    		if(b>=21){
    			cout<<"Aquarius"<<endl;
			}
			else{
			    cout<<"Capricorn"<<endl;
			}
			break;
		case 2:
    		if(b>=19){
    			cout<<"Pisces"<<endl;
			}
			else{
			    cout<<"Aquarius"<<endl;
			}
			break;
		case 3:
    		if(b>=21){
    			cout<<"Aries"<<endl;
			}
			else{
			    cout<<"Pisces"<<endl;
			}
			break;
		case 4:
    		if(b>=21){
    			cout<<"Taurus"<<endl;
			}
			else{
			    cout<<"Aries"<<endl;
			}
			break;
		case 5:
    		if(b>=22){
    			cout<<"Gemini"<<endl;
			}
			else{
			    cout<<"Taurus"<<endl;
			}
			break;
		case 6:
    		if(b>=22){
    			cout<<"Cancer"<<endl;
			}
			else{
			    cout<<"Gemini"<<endl;
			}
			break;
		case 7:
    		if(b>=23){
    			cout<<"Leo"<<endl;
			}
			else{
			    cout<<"Cancer"<<endl;
			}
			break;
		case 8:
    		if(b>=24){
    			cout<<"Virgo"<<endl;
			}
			else{
			    cout<<"Leo"<<endl;
			}
			break;
		case 9:
    		if(b>=24){
    			cout<<"Libra"<<endl;
			}
			else{
			    cout<<"Virgo"<<endl;
			}
			break;
		case 10:
    		if(b>=24){
    			cout<<"Scorpio"<<endl;
			}
			else{
			    cout<<"Libra"<<endl;
			}
			break;
		case 11:
    		if(b>=23){
    			cout<<"Sagittarius"<<endl;
			}
			else{
			    cout<<"Scorpio"<<endl;
			}
			break;
		case 12:
    		if(b>=22){
    			cout<<"Capricorn"<<endl;
			}
			else{
			    cout<<"Sagittarius"<<endl;
			}
			break;
		
	}
}
