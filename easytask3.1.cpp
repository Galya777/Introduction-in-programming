#include <iostream>
using namespace std;
int main()
{
	int number;
	cin >> number;
	cout << 1;
	for (int i = 1; i <= number; i++) {
		if ((i % 2 == 0) || (i % 3 == 0) || (i % 5 == 0)) {
			if (i % 7 == 0) {
				i++;
			}
			cout << " " << i << " ";
		}
	}
	return 0;
}
