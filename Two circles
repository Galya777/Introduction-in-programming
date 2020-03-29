#include <iostream>
#include <math.h>
using namespace std;
int main(){
	 int x1, y1, r1, x2, y2, r2;
	cin >> x1>> y1>> r1>> x2>> y2>> r2;
	double L = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
	if (L == r1 + r2 || L == abs(r1 - r2)) {
		cout << "The circles are touching themselves." << endl;
	}
	else if (L > abs(r1 - r2) || (L < (r1 + r2))) {
		cout << "The circles are intersecting. " << endl;
	}
	else {
		cout << "The circles have no common point." << endl;
	} return 0;
}
