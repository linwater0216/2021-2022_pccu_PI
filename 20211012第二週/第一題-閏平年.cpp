/*�ռ��g�@�ӵ{���A��J�@�� 4 ��ƪ���ơA�N��褸���~���A�M��P�_�O�_���|�~�C

�|�~�P�_��k�G1. �i�H�Q4�㰣�����i�H�Q100�㰣�C 2. �i�H�Q400�㰣�C

��J�����G��J�@ 4 ��ƪ���ơA��ܦ褸�~���C(�Ф����Ҽ{�ҥ~���p)

��X�����G�ھ��D�N�A��X is LeapYear �� is CommonYear�A�����аO�o����C

�d�ҿ�J�G
2019

�d�ҿ�X�G
2019 is CommonYear

*/

#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a%4==0&&a%100!=0||a%400==0){
    	cout<<a<<" is LeapYear"<<endl;
	}
	else{
		cout<<a<<" is CommonYear"<<endl;
	}
}
