//��J-3B9487987
//��XY7
//��J+3Y9487987
//��XB7
//��J+3X9487987

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;





////���ıK�X�e�m
//string encrypt(string text, int s)
//{
// string result = "";
//
// // traverse text
// for (int i=0;i<text.length();i++)
// {
//  // apply transformation to each character
//  // Encrypt Uppercase letters
//  if (isupper(text[i]))
//   result += char(int(text[i]+s-65)%26 +65);
//
// // Encrypt Lowercase letters
//// else
////  cout<<"input error!"<<endl;
// }
//
// // Return the resulting string
// return result;
//}
////���ıK�X�e�m







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
 char num[100];
 char number[100];

//    puts("�п�J�r��...");
    scanf("%s", A);
 cout<<A<<endl;//����








 memset(B,'\0',sizeof(B));//�M��B���r��
// cout<<B<<endl;//����
 strncpy(B,A,3);//�ƻsA�e�T�X��B//-3B
// cout<<B;//����
 strncpy(C,B,1);//�ƻsB�e1�X��C//���t��
 //cout<<C<<endl;//����

// string D = C;
//    reverse(D.begin(),D.end());
//    cout << "�Ӥl�ꪺ�ϦV: ";
//    cout << D;

    reverse(&B[0], &B[3]);//�r��ϦV//�D�^��
   // cout << B << endl;//�r��ϦV//����
    strncpy(D,B,1);//�ƻsB�e1�X��D//���t��
// cout<<D<<endl;//����










    strncpy(num,A,2);
   // cout << num << endl;//-3
  reverse(&num[0], &num[2]);//�r��ϦV//�D�Ʀr
  //  cout << num << endl;//3-
  strncpy(number,num,1);
  // cout << number << endl;
int i=atol(number); //char=int
// cout << i<< endl;




 strncpy(E,B,2);//�ƻsB�e1�X��E//����
// cout<<E<<endl;//����

 reverse(&E[0], &E[2]);//�r��ϦV//����
//    cout << E << endl;//�r��ϦV//����

    strncpy(F,E,1);//�ƻsE�e1�X��F//����
// cout<<F<<endl;//����



 //���ıK�X�A�Ȥj�g

    size_t length = strlen(A);
 length=length-3;      //length=�r�����
   // printf("�r����סG%lu\n", length);//�r�����
   
   if(D[0]<'A' || D[0]>'Z') {
	cout<<"input error!"<<endl;
	}
	else{
		if(C[0]=='+'){
    if(D[0]+i>=90)
    {
        printf("%c%lu\n",(D[0]+i-26),length);
        cout<<endl;
    }
    else{
	printf("%c%lu\n",D[0]+i,length);
	cout<<endl;
	}
}
    else{
	if(D[0]-i<=65)
    {
        printf("%c%lu\n",(D[0]-i+26),length);
        cout<<endl;
    }
    else {
    	printf("%c%lu\n",D[0]-i,length);
    	cout<<endl;
	}
}
	}
	
//	||"B"||"C"||"D"||"E"||"F"||"G"||"H"||"I"||"J"||"K"||"L"||"M"||"N"||"O"||"P"||"Q"||"R"||"S"||"T"||"U"||"V"||"W"||"X"||"Y"||"Z")
	
	
	
	
	
	
//	 printf("%c%lu\n",D[0]+(26-i),length);


    return 0;
}
	
	
	
	
	
	
   
//   if(D!=(A||B||C||D||E||F||G||H||I||J||K||L||M||N||O||P||Q||R||S||T||U||V||W||X||Y||Z)){
//   	cout<<"input error!"<<endl;
//   }



//if(C[0]=='+')
//{
//    if(D[0]+i>26)
//    {
//        printf("%c%lu\n",(D[0]+i)-26,length);
//    }
//    else printf("%c%lu\n",D[0]+i,length);
//}
//    else printf("%c%lu\n",D[0]+(26-i),length);
//
//
//    return 0;
//}

