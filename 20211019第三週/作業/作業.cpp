//輸入-3B9487987
//輸出Y7
//輸入+3Y9487987
//輸出B7
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;





//凱薩密碼前置 
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
//凱薩密碼前置 







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


template <typename T>//字串反向前置 
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
    char A[100];//輸入 
	char B[100];//前三位元 
	char C[100];//+-號 
	char D[100];//英文字母
	char E[100];//平移次數1
	char F[100];//平移次數最後 
    puts("請輸入字串...");
    scanf("%s", A);
	cout<<A<<endl;//測試 
	
	memset(B,'\0',sizeof(B));//清除B的字串 
//	cout<<B<<endl;//測試 
	strncpy(B,A,3);//複製A前三碼給B
//	cout<<B;//測試 
	strncpy(C,B,1);//複製B前1碼給C//正負號 
//	cout<<C<<endl;//測試
	
//	string D = C;
//    reverse(D.begin(),D.end());  
//    cout << "該子串的反向: ";  
//    cout << D; 

    reverse(&B[0], &B[3]);//字串反向//求英文 
//    cout << B << endl;//字串反向//測試 
	
	strncpy(D,B,1);//複製B前1碼給D//正負號 
//	cout<<D<<endl;//測試
	
	strncpy(E,B,2);//複製B前1碼給E//平移 
//	cout<<E<<endl;//測試
	
	reverse(&E[0], &E[2]);//字串反向//平移 
//    cout << E << endl;//字串反向//測試
    
    strncpy(F,E,1);//複製E前1碼給D//平移 
	cout<<F<<endl;//測試
	
	
	
	//凱薩密碼，僅大寫 
	string text="ertyuil;";
//	char F;
	scanf("%c",&F);//找char放進int的東東
	printf("%c",&F);
	cout << "Text : " << text;
//	cout << "\nShift: " << s;
//	cout << "\nCipher: " << encrypt(text, s);
	//凱薩密碼
	
	
	
	
	
	
	
	
	
//	size_t strlen(const char A);清除A字串裡資料 
	
    size_t length = strlen(A);
	length=length-3;				  //length=字串長度 
    printf("字串長度：%lu\n", length);//字串長度

    return 0;
}

//資料參考:https://morosedog.gitlab.io/C-20191018-C-14/ 
//https://ithelp.ithome.com.tw/articles/10226999
//https://shengyu7697.github.io/cpp-string-reverse/
//https://shengyu7697.github.io/cpp-string-reverse/
