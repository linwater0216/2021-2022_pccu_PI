/*�{���s�x�����������E�ءG2000���B1000���B500���B200���B100���B50���B10���B5���B1���C�м��g�{���p��X��I�@���ڶ��ɩһݭn�̤֪��ȶr�εw���C

��J�����G��J�@�ƭȪ�ܤ�I���B(�ƭȬ����)�C

��X�����G�w���J�ȡA��X�s�x���U�f�������һݭn���Ӽ�(�Ш̷ӤU��d�Ү榡�i���X)�C�Y��J�Ȭ��t�ƫh��Xerror�C

(�`�N�Ʀr�P�Ÿ����O�b�ΡA�_�����Цh�@��ť�)

�d�ҿ�J�G
6666

�d�ҿ�X�G
2000: 3
1000: 0
500: 1
200: 0
100: 1
50: 1
10: 1
5: 1
1: 1

*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a<0){
        cout<<"error"<<endl;
    }
    else{
        cout<<"2000: "<<a/2000<<endl;
        a=a%2000;
        cout<<"1000: "<<a/1000<<endl;
        a=a%1000;
        cout<<"500: "<<a/500<<endl;
        a=a%500;
        cout<<"200: "<<a/200<<endl;
        a=a%200;
        cout<<"100: "<<a/100<<endl;
        a=a%100;
        cout<<"50: "<<a/50<<endl;
        a=a%50;
        cout<<"10: "<<a/10<<endl;
        a=a%10;
        cout<<"5: "<<a/5<<endl;
        a=a%5;
        cout<<"1: "<<a/1<<endl;
    }
}
