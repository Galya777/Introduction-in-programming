#include <iostream>
using namespace std;
int main()
{
	double x;
	double y;
	double u; double v;
	char br = '(';
	char comma = ',';
	char bra = ')';
	cin >> br >> x >> comma >> y >> bra;
	cin >> br >> u >> comma >> v >> bra;

	const int r1 = 8;
	const int r2 = 3;
	const int r3 = 1;
	const double  EPS = 0.001;

	double change = x;
	x = u;
	change = u;

	double changeone = y;
	y = v;
	changeone = v;
	if (abs(u + v) < (r1 - r1 * EPS) / 2 && abs(u + v) > (r2 - r2 * EPS) / 2) {
		cout << 10 << endl;
	}
	else if (abs(u + v) < (r2 - r2 * EPS) / 2 && abs(u + v) > (r3 - r3 * EPS) / 2) {
		cout << 10 * 2 << endl;
	}
	else if (abs(u + v) < (r3 - r3 * EPS) / 2) {
		cout << (10 + (10 * 2)) * 2 << endl;
	}
	else if (abs(u + v) == 2 * EPS) {
		cout << 0 << endl;
	}
	else {
		cout << 0 << endl;
	}

	return 0;
}

