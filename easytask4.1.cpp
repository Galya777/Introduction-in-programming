#include <iostream>
using namespace std;
bool simple(unsigned int p) {
	if (p < 2) {
		return false;
	} for (int i = 2; i <= p / 2; i++) {
		if (p % i == 0) {
			return false;
		}
	} return true;
	}
int main()
{
	int N;
	cin >> N;
	int m;
	int n;
	if (N % 2 == 0) {
	for (m = 0; m <= N / 2; m++) {
	for (n = N; n >= N / 2; n--) {
	if ((simple(m) == true) && (simple(n) == true)) {
		m + n;
	if (m + n == N) {
		cout << '{' << m << ',' << n << '}'<<" ";
	} 			
	}
	}
		}
	} else {
		cout << "Are you joking with me, Euler? This number is not even! ";
	}
	return 0;
}

