#include <iostream>
#include <math.h>
using namespace std;
int sumOfnumbers(int number, int counterSystem) {
	while ((number / counterSystem) > 1) {
		double a = number % counterSystem;
		double b = number / counterSystem;
		int sum = a * b;

		return sum;
	}
}
int divider(int number1, int number2) {
	while (number1 != number2){ 
		if (number1 > number2) {
			number1 -= number2;
		}
		else {
			number2 -= number1;
		}
	}
		return number1;
	return 0;
}
int power(int a, int b) {
	long long result = 1;
	for (unsigned int i = 0; i < b; ++i)
		result *= a;
	return result;
}
bool greenNumber(unsigned int g) {
	int sum = 0;
	int change = g;
	while (change != 0) {
		int digit = change % 10;
		sum += digit * digit * digit;
		change /= 10;
	} if (sum != g) {
		return false;
	}

	return true;
}
int greenSum(int M, int N) {
	int sum = 0;
	if (M < N) {
		for (int i = M; i <= N; i++) {
			if (greenNumber(i)) {
				sum += i;
			}
		}
	} else {
		for (int i = N; i <= M; i++) {
			if (greenNumber(i)) {
				sum += i;
			}
		}
	}
	return sum;
}
bool redNumber(unsigned int r) {
	int digitSum = 0;
	if (r > 0) {
		int a = r / 1000;
		int b = r / 100 % 10;
		int c = r / 10 % 10;
		int d = r % 10;
		digitSum = a + b + c + d;
		for (int k = 3; k <= r; k++) {
			++k;
			if ( r == digitSum * k) {
				return true;
			}
			else {
				return false;
			}
		}
	}
}
int redSum(int M, int N) {
	int sum = 0;
	if (M < N) {
		for (int i = M; i <= N; i++) {
			if (redNumber(i)) {
				sum += i;
			}
		}
	}
	else {
		for (int i = N; i <= M; i++) {
			if (redNumber(i)) {
				sum += i;
			}
		}
	}
	return sum;
}
int devicionOfSum(int M, int N) {
	int devicition = 0;
	if (M < N) {
		 devicition = abs(redSum(M, N) - greenSum(M, N));
	}
	else {
		 devicition = abs(redSum(N, M) - greenSum(N, M));
	}
	return devicition;
}
double line(double x, int n) {
	double membership = 1;
	double term = 1, fct, y = 2, m;
	for (int i = 1; i < n; i++) {
		fct = 1;
		for (int j = 1; j <= y; j++) {
			fct = fct * j;
		}
		term = term * (-1);
		m = term * pow(x, y) / fct;
		membership = membership + m;
		y += 2;
	}
	return membership;
}
double sin(double x) {
	double cos = line(x, x);
	double sin =sqrt (1 - cos * cos);
	return sin;
}
double tg(double x) {
	double tg = sin(x) / line(x, x);
	return tg;
}
double cotg(double x) {
	double cotg = 1 / tg(x);
	return cotg;
}
int main()
{
	int tester1;
	int tester2;
	cin >> tester1>> tester2;
	cout << sumOfnumbers(tester1, tester2)<<endl;
	cout << divider(tester1, tester2)<<endl;
	cout << power(tester1, tester2)<<endl;
	if (greenNumber(tester1)) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}
	cout << greenSum(tester1, tester2)<<endl;
	if (redNumber(tester1)) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}
	cout<<devicionOfSum(tester1, tester2)<<endl;
	cout << line(tester1, tester2) << endl;
	cout << sin(line(tester1, tester2)) << endl;
	cout << tg(line(tester1, tester2)) << endl;
	cout << cotg(line(tester1, tester2)) << endl;
	return 0;
}

