//��J-3B9487987
//��XY7
//��J+3Y9487987
//��XB7
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;





//���ıK�X�e�m 
string encrypt(string text, int s)
{
	string result = "";

	// traverse text
	for (int i=0;i<text.length();i++)
	{
		// apply transformation to each character
		// Encrypt Uppercase letters
		if (isupper(text[i]))
			result += char(int(text[i]+s-65)%26 +65);

	// Encrypt Lowercase letters
	else
		cout<<"input error!"<<endl;
	}

	// Return the resulting string
	return result;
}
//���ıK�X�e�m 







//void swap(char *x, char *y) {
//    char tmp = *x;
//    *x = *y;
//    *y = tmp;
//}
//
//void reverse(char *first, char *last) {
//    --last;
//    while (first < last) {
//        swap(first, last);
//        ++first;
//        --last;
//    }
//}


template <typename T>//�r��ϦV�e�m 
void swap(T *x, T *y) {
    T tmp = *x;
    *x = *y;
    *y = tmp;
}

template <typename T>
void reverse(T *first, T *last) {
    --last;
    while (first < last) {
        swap(first, last);
        ++first;
        --last;
    }
}






int main(void) {
    char A[100];//��J 
	char B[100];//�e�T�줸 
	char C[100];//+-�� 
	char D[100];//�^��r��
	char E[100];//��������1
	char F[100];//�������Ƴ̫� 
    puts("�п�J�r��...");
    scanf("%s", A);
	cout<<A<<endl;//���� 
	
	memset(B,'\0',sizeof(B));//�M��B���r�� 
//	cout<<B<<endl;//���� 
	strncpy(B,A,3);//�ƻsA�e�T�X��B
//	cout<<B;//���� 
	strncpy(C,B,1);//�ƻsB�e1�X��C//���t�� 
//	cout<<C<<endl;//����
	
//	string D = C;
//    reverse(D.begin(),D.end());  
//    cout << "�Ӥl�ꪺ�ϦV: ";  
//    cout << D; 

    reverse(&B[0], &B[3]);//�r��ϦV//�D�^�� 
//    cout << B << endl;//�r��ϦV//���� 
	
	strncpy(D,B,1);//�ƻsB�e1�X��D//���t�� 
//	cout<<D<<endl;//����
	
	strncpy(E,B,2);//�ƻsB�e1�X��E//���� 
//	cout<<E<<endl;//����
	
	reverse(&E[0], &E[2]);//�r��ϦV//���� 
//    cout << E << endl;//�r��ϦV//����
    
    strncpy(F,E,1);//�ƻsE�e1�X��D//���� 
	cout<<F<<endl;//����
	
	
	
	//���ıK�X�A�Ȥj�g 
	string text="ertyuil;";
//	char F;
	scanf("%c",&F);//��char��iint���F�F
	printf("%c",&F);
	cout << "Text : " << text;
//	cout << "\nShift: " << s;
//	cout << "\nCipher: " << encrypt(text, s);
	//���ıK�X
	
	
	
	
	
	
	
	
	
//	size_t strlen(const char A);�M��A�r��̸�� 
	
    size_t length = strlen(A);
	length=length-3;				  //length=�r����� 
    printf("�r����סG%lu\n", length);//�r�����

    return 0;
}

//��ưѦ�:https://morosedog.gitlab.io/C-20191018-C-14/ 
//https://ithelp.ithome.com.tw/articles/10226999
//https://shengyu7697.github.io/cpp-string-reverse/
//https://shengyu7697.github.io/cpp-string-reverse/
