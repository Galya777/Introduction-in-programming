#include <iostream>
using namespace std;
bool validation(int number) {
	int f = number / 100000000;
	int firstone = f % 10;
	int g = number / 10000000;
	int secondone = g % 10;
	int h = number / 1000000;
	int thirdone = h % 10;
	if ((firstone >= 1) && (firstone < 9)) {
		cout << "card_version:" << firstone << endl;
		int g = number / 10000000;
		int secondone = g % 10;
		int h = number / 1000000;
		int thirdone = h % 10;
		switch (thirdone) {
		case 0: cout << "owner_spec: Informatics" << endl;
			break;
		case 1:cout << "owner_spec: Computer sience" << endl;
			break;
		case 2:cout << "owner_spec: Informatic system" << endl;
			break;
		case 3:cout << "owner_spec: Software engeneering" << endl;
			break;
		case 4: cout << "owner_spec: Applied mathemathics" << endl;
			break;
		case 5: cout << "owner_spec: Mathemathics" << endl;
			break;
		case 6: cout << "owner_spec: Statistic" << endl;
			break;
		case 7: return false;
			break;
		case 8:cout << "owner_spec: Mathemathics and Informatics" << endl;
			break;
		default:

			break;
		} if (((number / 10) % 100000) == 00000)
		{
			return false;
		}
	}
	else {
		return false;
	}
	return true;
}
bool authentic(int number) {
	unsigned int secondone = (number / 10000000) % 10;
	const short SIZE_OF_UNS_INT = sizeof(unsigned int) * 8;
	unsigned int mask = 1 << 2;
	//if ((secondone & mask) == 0) {
		//cout << "Light eyes"<<endl;	
	//else {
		//cout << "Dark eyes"<<endl;
	//if ((secondone & ~mask) == 0) {
		//cout << "Light hair"<<endl;
	//else {
		//cout << "Dark hair"<<endl;
	//if ((secondone & 1)==0) {
		//cout << "Female"<<endl;
	//else {
		//cout << "Male"<<endl;
	if (SIZE_OF_UNS_INT > 4) {
		return false;
	}
	int lastone = number % 10;
	int firstone = (number / 100000000) % 10;
	int thirdone = (number / 1000000) % 10;
	int fourthone = (number / 100000) % 10;
	int fifthone = (number / 10000) % 10;
	int sixthone = (number / 1000) % 10;
	int seventhone = (number / 100) % 10;
	int eigthone = (number / 10) % 10;

	int odds = firstone + thirdone + fifthone + seventhone;
	int evens = secondone + fourthone + sixthone + eigthone;
	int sum = odds * evens;
	if (secondone & ~mask == 1 && secondone & mask == 1) {
		sum = sum | 0xCAFE;
	}
	else if (secondone & ~mask == 0 && secondone & mask == 0) {
		sum = sum | 0xBABE;
	}
	else {
		sum = sum | 0xC001;
	}
	if (secondone & 1 == 0) {
		sum = sum ^ 0xFACE;
	}
	else {
		sum = sum ^ 0xC0DE;
	}
	unsigned int mask1 = 1;
	mask1 = (mask1 << 1) | 1;
	mask1 = (mask1 << 1) | 1;
	mask1 = (mask1 << 1) | 1;
	int result = sum & mask1;
	if (result > 10) {
		result % 10;
	} if (result == lastone) {
		return true;
	}
	else {
		return false;
	}
}
int main()
{
	int number;
	cin >> number;
	
	if (validation(number)) {

		cout << "owner_id:" << ((number / 10) % 100000) << endl;
	}
	else {
		cout << "Invalid card number" << endl;
	}
	if (authentic(number)) {
		cout << "Authentic";
	}
	else {
		cout << "Imitative";
	}
	int specialnumber;
	cin >> specialnumber;
	int id;
	if (number <= 31) {
		for (int n = 1; n <= specialnumber; n++) {

			cin >> id;
			int id0 = 1;
			cout << id0;
			if (id >= id0) {
				id = 1;
				cout << id;
			}
			else {
				id = 0;
				cout << id;
			}
			int k = id / 2;
			if (k % 2 == 0) {
				id = 0;
				cout << id;
			}
			else {
				id = 1;
				cout << id << endl;
			}

		}
		id += id;

		if (id < specialnumber) {
			cout << "Right side :" << specialnumber - (id / 2) << endl;
		}
		else if (id > specialnumber) {
			cout << "Left side:" << specialnumber - (id / 2) << endl;
		}
		else {
			cout << "Both sides :" << specialnumber - (id / 2) << endl;
		}

	}
	int count;
	cin >> count;
	const int MAX = 5000;
	int array[MAX];
	for (int i = 0; i < count; i++) {
		cin >> number;
		array[i] = number;

		int valid = 0;
		int invalid = 0;
		for (i = 0; i < count; i++) {
			if (validation(array[i]) && (authentic(array[i]))) {
				valid++;
			}
			else {
				invalid++;
			}
		}
		cout << valid << " " << invalid;
	}
		return 0;
}