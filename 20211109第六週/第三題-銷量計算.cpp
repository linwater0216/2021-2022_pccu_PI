/*

�@�a�l�ʤ��q�P�⤭�ؤ��P�����~�A��s�������O�O�G���~1�w$2.98�A���~2�w$4.50�A���~3�w$9.98�A���~4�w$4.49�M���~5�w$6.87�C�ЧA�]�p�@�ӵ{���A���Ū���@�s��Ʀr�t��G

a) ���~�s��
b) �P��q

�z���{�����Өϥ�switch�ԭz�A�H�P�w�U�Ӳ��~���s�����C�z���{�����p�����ܤW�@�g�Ҧ���X���~���`�s�����C�ϥΤ@��ĵ�ܱ���j��A�M�w��ɸӲפ�{������̫᪺ܳ���G�C

��J�����G�̧ǲ��~�s���H�ξP��q�A���첣�~�s����J-1�����C

��X�����G�e���ӼƦr���O�����~1�ܲ��~5���ӧO�`���A��6�ӼƦr���Ҧ����~���`���C

�d�ҿ�J(�̧Ǭ����~1�P��q 5�B���~3�P��q 2�B���~4�P��q 2�B���~1�P��q 1)�G
1 5 3 2 4 2 1 1 -1

�d�ҿ�X�G
17.88 0.00 19.96 8.98 0.00 46.82

*/


#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a;
	double b,c,d,a1=0,a2=0,a3=0,a4=0,a5=0;
	c=0;
	a=0;
	d=1;
	while(a!=-1){
		cin>>a;
		if(a==-1){
			break;
		}
		switch(a){
			case 1: 
	            cin>>b;
	            a1=a1+2.98*b;
	            c=c+2.98*b;
	            d++;
	            break;
	        case 2: 
	            cin>>b;
	            a2=a2+4.50*b;
	            c=c+4.50*b;
	            d++;
	            break;
	        case 3: 
	            cin>>b;
	            a3=a3+9.98*b;
	            c=c+9.98*b;
	            d++;
	            break;
	        case 4: 
	            cin>>b;
	            a4=a4+4.49*b;
	            c=c+4.49*b;
	            d++;
	            break;
	        case 5: 
	            cin>>b;
	            a5=a5+6.87*b;
	            c=c+6.87*b;
	            d++;
	            break;
	        default:
	        	break;
		}
	}
	
	cout<<fixed<<setprecision(2)<<a1<<a2<<a3<<a4<<a5<<c<<endl;
}
