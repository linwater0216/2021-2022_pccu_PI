/*

*/


#include <iostream>
using namespace std;
int integerPower (int base,int exponent){
	int a;
	switch(exponent){
		case 1:
			a=base;
			break;
		case 2:
			a=base*base;
			break;
		case 3:
			a=base*base*base;
			break;
		case 4:
			a=base*base*base*base;
			break;
		case 5:
			a=base*base*base*base*base;
			break;
		case 6:
			a=base*base*base*base*base*base;
			break;
		case 7:
			a=base*base*base*base*base*base*base;
			break;
		case 8:
			a=base*base*base*base*base*base*base*base;
			break;
		case 9:
			a=base*base*base*base*base*base*base*base*base;
			break;
		case 10:
			a=base*base*base*base*base*base*base*base*base*base;
			break;
		case 11:
			a=base*base*base*base*base*base*base*base*base*base*base;
			break;
		case 12:
			a=base*base*base*base*base*base*base*base*base*base*base*base;
			break;
		case 13:
			a=base*base*base*base*base*base*base*base*base*base*base*base*base;
			break;
		case 14:
			a=base*base*base*base*base*base*base*base*base*base*base*base*base*base;
			break;
		case 15:
			a=base*base*base*base*base*base*base*base*base*base*base*base*base*base*base;
			break;
		case 16:
			a=base*base*base*base*base*base*base*base*base*base*base*base*base*base*base*base;
			break;
		case 17:
			a=base*base*base*base*base*base*base*base*base*base*base*base*base*base*base*base*base;
			break;
		case 18:
			a=base*base*base*base*base*base*base*base*base*base*base*base*base*base*base*base*base*base;
			break;
		case 19:
			a=base*base*base*base*base*base*base*base*base*base*base*base*base*base*base*base*base*base*base;
			break;
		case 20:
			a=base*base*base*base*base*base*base*base*base*base*base*base*base*base*base*base*base*base*base*base;
			break;
	}
	return a;
}

int main()
{
   int exp; 
   int base; 
   
   cin >> base >> exp;
   cout << integerPower( base, exp ) << endl;
}
