#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int w[4][5];//�w�q�X4*5���G���}�C
    int max;
    int s;
    int count;
    int z[4][6];
    cout<<"�мg�X�A���G���}�C�]4*5�^���������G"<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            cin>>w[i][j];
        }
    }
    for(int i=0;i<4;i++){
        count=0;
        for(int j=0;j<5;j++){
            s=0;
            for(int l=0;l<5-j;l++){//�D�`�� 
                s=s+w[i][j+l];
                z[i][count+l]=s;
            }
            count=count+5-j;
        }
    }
    //�D�X�̤j��
    max=z[0][0];
    for(int j=0;j<6;j++){
        for(int i=0;i<4;i++){
            s=0;
            for(int r=0;r<4-i;r++){
                s=s+z[r+i][j];
                if(max<s){
                    max=s;
                }
            }
        }
    }
    cout<<"�ӤG���}�C���̤j�l�}�C�M���G"<<max<<endl;
} 
