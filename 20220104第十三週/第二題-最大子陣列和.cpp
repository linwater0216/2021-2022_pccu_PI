/*
�D�ءG�G���}�C�P�l�}�C�����p�W�D�A�м��g�{����J�}�C�B�p��ÿ�X���}�C���Ҧ��l�x�ΰ}�C���㦳�̤j�����M���l�x�ΰ}�C�A�H�θӤl�x�ΰ}�C�������M�C


�d�ҿ�J�G
0 -2 -7 0 9 2 -6 2 -4 1 -4 1 -1 8 0 -2

�d�ҿ�X�G
15
(�]�W�Ҥ���̤j�����M���l�x�ΰ}�C[1][0]��[3][1]�A�䤸���M��15)
*/
#include <iostream>
#include <iomanip>

using namespace std;
const int rows=4;
const int columns=4;
int s(int array[rows][columns],int tl_row,int tl_column,int dr_row,int dr_column){
	int total=0;
	for(int i=tl_row;i<=dr_row;i++){
		for(int j=tl_column;j<=dr_column;j++){
			total=total+array[i][j];
		}
	}
	return total;
}


int main(){
	int array[rows][columns];
	int max;
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
		   cin >> array[i][j];
		}
	}
	max=array[0][0];
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			for(int x=0;x<4;x++){
				for(int z=0;z<4;z++){
					if(s(array,i,j,x,z)>max){
						max=s(array,i,j,x,z);
					}
				}
			}
		}
	}
	cout<<max<<endl;
}
