/*���Ѧ��\�h��������B�ҥH2�������ơA
�]���п�J��Ƥ��O�����ƪ��d��A
�ñN�Ҧ��ƭp�⧹��ۥ[�A
�|�Ҩӻ���J3�M6�A
�p��2�T����+2�|����+2������+2�������ÿ�X�A
�Шϥ�while�����C

�ФŨϥμƾǨ禡�w.


��J�����G�ھ��D�ؿ�J��ӫD�t��ơA�N����ƪ��d��A��J�Ȥ���0~15�����C

��X�����G�ھ��D�N�A��X�p�⧹�ᤧ��(����O�o����)�C

�d�ҿ�J�G
3 6

�d�ҿ�X�G
120
*/ 
#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c,i,z=0;
	cin>>a;
	cin>>b;
	c=2;
    while(a<=b){
    	i=0;
    	c=2;
    	while(i<a-1){
    		c=c*2;
    		i++;
		}
		a++;
		z=z+c;
	}
    cout<<z<<endl;
}

