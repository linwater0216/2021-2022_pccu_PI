/*
��J�@�ӥѭ^��r���Ҳզ����r��A��X�r�ꤤ�j�g�r���P�p�g�r�����ӼơC


��J�����G��J�@�Ӧr��(string)�A�Ӧr��ȥѭ^��j�p�g�r���Ҳզ��A�L�ݦҼ{�ҥ~���p�C

��X�����G�ھ��D�N�A�̧ǦL�X�j�g�r���P�p�g�r�����ӼơC


�d�ҿ�J�G
ABcDEfgHiJk

�d�ҿ�X�G
6 5
*/

#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int big=0;
	int small=0;
    char string[100];
    cin.getline(string,100);
    for(int i=0; i<100 && string[i]!=NULL; i++){
         if(int(string[i])>='A' && int(string[i])<='Z'){
         	big=big+1;
         }
		 else if(int(string[i])>='a' && int(string[i])<='z'){
		 	small=small+1;
         }
    }
    cout<<big<<" "<<small<<endl;
    return 0;
}
