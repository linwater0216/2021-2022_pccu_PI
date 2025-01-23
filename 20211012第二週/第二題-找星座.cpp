/*請撰寫程式，輸入月及日期，輸出對應星座。星座之對應日期如下：

1 月 21 日 至 2 月 18 日 Aquarius (水瓶座)
2 月 19 日 至 3 月 20 日 Pisces (雙魚座)
3 月 21 日 至 4 月 20 日 Aries (牡羊座)
4 月 21 日 至 5 月 21 日 Taurus (金牛座)
5 月 22 日 至 6 月 21 日 Gemini (雙子座)
6 月 22 日 至 7 月 22 日 Cancer (巨蟹座)
7 月 23 日 至 8 月 23 日 Leo (獅子座)
8 月 24 日 至 9 月 23 日 Virgo (處女座)
9 月 24 日 至 10 月 23 日 Libra (天秤座)
10 月 24 日 至 11 月 22 日 Scorpio (天蠍座)
11 月 23 日 至 12 月 21 日 Sagittarius (射手座)
12 月 22 日 至 1 月 20 日 Capricorn (摩羯座)

輸入說明：輸入兩個數(兩個數皆為整數，分別為「月」及「日」，請不須考慮例外狀況)。

輸出說明：根據題意，將「月」及「日」轉成星座輸出，結尾請記得換行。

範例輸入：
6 1

範例輸出：
Gemini

*/

#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    switch(a){
    	case 1:
    		if(b>=21){
    			cout<<"Aquarius"<<endl;
			}
			else{
			    cout<<"Capricorn"<<endl;
			}
			break;
		case 2:
    		if(b>=19){
    			cout<<"Pisces"<<endl;
			}
			else{
			    cout<<"Aquarius"<<endl;
			}
			break;
		case 3:
    		if(b>=21){
    			cout<<"Aries"<<endl;
			}
			else{
			    cout<<"Pisces"<<endl;
			}
			break;
		case 4:
    		if(b>=21){
    			cout<<"Taurus"<<endl;
			}
			else{
			    cout<<"Aries"<<endl;
			}
			break;
		case 5:
    		if(b>=22){
    			cout<<"Gemini"<<endl;
			}
			else{
			    cout<<"Taurus"<<endl;
			}
			break;
		case 6:
    		if(b>=22){
    			cout<<"Cancer"<<endl;
			}
			else{
			    cout<<"Gemini"<<endl;
			}
			break;
		case 7:
    		if(b>=23){
    			cout<<"Leo"<<endl;
			}
			else{
			    cout<<"Cancer"<<endl;
			}
			break;
		case 8:
    		if(b>=24){
    			cout<<"Virgo"<<endl;
			}
			else{
			    cout<<"Leo"<<endl;
			}
			break;
		case 9:
    		if(b>=24){
    			cout<<"Libra"<<endl;
			}
			else{
			    cout<<"Virgo"<<endl;
			}
			break;
		case 10:
    		if(b>=24){
    			cout<<"Scorpio"<<endl;
			}
			else{
			    cout<<"Libra"<<endl;
			}
			break;
		case 11:
    		if(b>=23){
    			cout<<"Sagittarius"<<endl;
			}
			else{
			    cout<<"Scorpio"<<endl;
			}
			break;
		case 12:
    		if(b>=22){
    			cout<<"Capricorn"<<endl;
			}
			else{
			    cout<<"Sagittarius"<<endl;
			}
			break;
		
	}
}
