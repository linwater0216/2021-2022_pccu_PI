#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int w[4][5];//定義出4*5的二維陣列
    int max;
    int s;
    int count;
    int z[4][6];
    cout<<"請寫出你的二維陣列（4*5）中的元素："<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            cin>>w[i][j];
        }
    }
    for(int i=0;i<4;i++){
        count=0;
        for(int j=0;j<5;j++){
            s=0;
            for(int l=0;l<5-j;l++){//求總數 
                s=s+w[i][j+l];
                z[i][count+l]=s;
            }
            count=count+5-j;
        }
    }
    //求出最大數
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
    cout<<"該二維陣列的最大子陣列和為："<<max<<endl;
} 
