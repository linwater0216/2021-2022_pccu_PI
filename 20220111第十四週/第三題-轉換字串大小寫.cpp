/*
��J�@�ӥѭ^��r���Ҳզ����r��A�N�䤤���p�g�r���ഫ���j�g�r�����X�C


��J�����G��J�@�Ӧr��(string)�A�Ӧr��ȥѭ^��j�p�g�r���Ҳզ��A�L�ݦҼ{�ҥ~���p�C

��X�����G�ھ��D�N�A�N�䤤���p�g�r���ഫ���j�g�r���A�æL�X�C


�d�ҿ�J�G
ABcDEfgHiJk

�d�ҿ�X�G
ABCDEFGHIJK

*/

#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    char string[100];
    cin.getline(string,100);
    
    for(int i=0; i<100 && string[i]!=NULL;i++){
         if(int(string[i])>='A' && int(string[i])<='Z'){
         	cout<<string[i];
         }
		 else if(int(string[i])>='a' && int(string[i])<='z'){
		 	string[i]=string[i]-32;
			cout<<string[i];
         }
    }
    return 0;
}
