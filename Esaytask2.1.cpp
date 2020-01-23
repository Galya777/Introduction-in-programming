#include <iostream>
using namespace std;
int main()
{
	int number;
	cin >> number;
	if (number<= 3000) {
		int firstone = number / 1000;
		switch(firstone){
		case 1: 
			cout << "M";
			break;
		case 2:
			cout << "MM";
			break;
		case 3:
			cout << "MMM";
			break;
		}
		int secondone = (number / 100) % 10;
		switch (secondone) {
		case 1:
			cout << "C";
			break;
		case 2:
			cout << "CC";
			break;
		case 3:
			cout << "CCC";
			break;
		case 4:
			cout << "CD";
			break;
		case 5:
			cout << "D";
			break;
		case 6:
			cout << "DC";
			break;
		case 7:
			cout << "DCC";
			break;
		case 8:
			cout << "DCCC";
			break;
		case 9:
			cout << "CM";
			break;
		}
		int thirdone = (number / 10) % 10;
		switch (thirdone) {
		case 1:
			cout << "X";
			break;
		case 2:
			cout << "XX";
			break;
		case 3:
			cout << "XXX";
			break;
		case 4:
			cout << "XL";
			break;
		case 5:
			cout << "L";
			break;
		case 6:
			cout << "LX";
			break;
		case 7:
			cout << "LXX";
			break;
		case 8:
			cout << "LXXX";
			break;
		case 9:
			cout << "XC";
			break;
		}
		int fourthone = number % 10;
		switch (fourthone) {
		case 1:
			cout << "I";
			break;
		case 2:
			cout << "II";
			break;
		case 3:
			cout << "III";
			break;
		case 4:
			cout << "IV";
			break;
		case 5:
			cout << "V";
			break;
		case 6:
			cout << "VI";
			break;
		case 7:
			cout << "VII";
			break;
		case 8:
			cout << "VIII";
			break;
		case 9:
			cout << "IX";
			break;
		}
		
	}
	else {
		cout << "Invalid number" << endl;
	}
	return 0;
}


