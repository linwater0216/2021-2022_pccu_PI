/*
��J�@�ӥѭ^��r���Ҳզ����S��r��A�r�ꤤ�i��]�t /n�B/t�B/c�B/b�B/f ���زŸ��A�Эp���X�{�ӼơC


��J�����G��J�@�Ӧr��(string)�A�Ӧr��ȥѭ^��j�p�g�r���P�S��r�ũҲզ��A�L�ݦҼ{�ҥ~���p�C

��X�����G�ھ��D�N�A�p��Ÿ����ӼơC


�d�ҿ�J�G
Today/nis/ca/tniceday

�d�ҿ�X�G
3

*/
#include<string>
#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int z=0;
    string n;
    cin>>n;
    for(int i=0;i<n.size();i++){
    	if(n[i]=='/'&&n[i+1]=='n'||n[i]=='/'&&n[i+1]=='t'||n[i]=='/'&&n[i+1]=='c'||n[i]=='/'&&n[i+1]=='b'||n[i]=='/'&&n[i+1]=='f'){
    		z++;
		}
	}
	cout<<z<<endl;
}
