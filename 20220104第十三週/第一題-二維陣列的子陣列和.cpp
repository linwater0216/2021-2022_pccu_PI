
/*
�D�ءG�@�ӤG���}�C���l�x�ΰ}�C���w�q���G���}�C���j�p��1*1�H�W���l�}�C�A�]�Y�O�b�G���}�C�W���N�e�X�@�ӯx�ΰϰ�ҥ]�򪺤l�}�C�^�C


0 -2 -7 0

9 2 -6 2

-4 1 -4 1

-1 8 0 -2


�Ҧp�H�U�}�C�Y���W���}�C���l�x�ΰ}�C(�ۥ��W����[0][0]�ܥk�U����[1][3]���x��)�C


0 -2 -7 0

9 2 -6 2


�����@��4*4���G���}�C�H�Τl�x�ΰ}�C�����W�I(�C�B��)�Υk�U�I(�C�B��)�A�м��g�禡sumOfElements�p��öǦ^�Ӥl�x�ΰ}�C�������M�C

�� �аt�Xmain�禡����Amain�禡�Фŭק�


��J�����G20�ӥH�ťչj�}����ơA�e16�ӥN��4*4���G���}�C�A�H�C���D�C�}�C�������Ȧb-128��127�����]�]�t���I�^�C��4�ӥN���l�x�ΰ}�C�����W�I(�C�B��)�Υk�U�I(�C�B��)�A�Ҧp0 0 1 3 ��ܥѥ��W����[0][0]�ܥk�U����[1][3]�����l�x�ΰ}�C�C

��X�����G�z�LsumOfElements�禡�N�l�x�ΰ}�C�ۥ[���X�C


�d�ҿ�J�G
0 -2 -7 0 9 2 -6 2 -4 1 -4 1 -1 8 0 -2 0 0 1 3


�d�ҿ�X�G
-2
*/
#include <iostream>
#include <iomanip>
using namespace std;
const int rows=4;
const int columns=4;

int sumOfElements(int array[rows][columns],int tl_row,int tl_column,int dr_row,int dr_column){
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
	int tl_row, tl_column, dr_row, dr_column;
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
		   cin >> array[i][j];
		}
	}
	cin >> tl_row>>tl_column>>dr_row>>dr_column;
	
	cout<<sumOfElements(array, tl_row, tl_column, dr_row, dr_column);
	
}
