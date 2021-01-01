#include <iostream>
using namespace std;
bool equal_digits(int number, int mask) {
	if (number == 0) {
		return false;
	}
		int lastdigit = 1 << (number % 10);
		if (mask&lastdigit) {
			return true;
		}
		return equal_digits(number / 10, mask | lastdigit);
}
int main()
{
	const int MASK = 0;
	int number;
	cin >> number;
	if (equal_digits(number,MASK)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}


	return 0;
}

