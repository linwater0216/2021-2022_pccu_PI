/*�@��ӻ��A�k�l���з��魫��(����-80)*0.7�F�k�l���з��魫��(����-70)*0.6�F�м��g�{���p���з��魫�C

��J�����G��J��Ӽƭ�(�Ҭ����)�A�̧ǥN�������ΩʧO�]1�N��k�l�F2�N��k�l�A�Ф����Ҽ{�ҥ~���p�^�C

��X�����G�ھ��D�N�A��X�з��魫�A�B�I�ƨ��ܲĤ@�� �C

(�`�N�Ʀr���O�b��)

�d�ҿ�J�G
172 1

�d�ҿ�X�G
64.4

*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double A;
    double B;
    cin>>A;
    cin>>B;
    if(B==1){
        A=(A-80)*0.7;
        cout<<fixed<<setprecision(1)<<A;
    }
    else{
       A=(A-70)*0.6;
        cout<<fixed<<setprecision(1)<<A;
    }
}
