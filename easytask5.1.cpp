#include <iostream>
using namespace std;
int main()
{
	const int MAXSIZE = 1001;
	int power;
	cin >> power;
	double array[MAXSIZE];
	double queficient;
	int derivative;
	int differencial;
	int diff_times;
	for (int i = 0; i <= power; i++) {

		cin >> queficient;
		array[i] = queficient;
	}
	cout << "Which derivative you want to calculate?" << endl;

	cin >> derivative;
	for (int g = 0; g < derivative; g++) {
		for (int i = 0; i <= power; i++) {
			differencial = power - i - g;
			diff_times = 1 - g;
			if (differencial > diff_times) {
				array[i] = (power - i - g) * array[i];
			}
			else {
				array[i] = 0;
			}
		}
	}
	int x_Power = power - derivative;
	for (int i = 0; i <= x_Power; i++) {
		if (i == x_Power) {
			cout << array[i] << endl;
		}
		else if (i == (x_Power - 1)) {
			cout << array[i] << "x" << '+';
		}
		else {
				cout << array[i] << "x^" << (power - x_Power) << '+';
			
		}
	}
		return 0;
}
