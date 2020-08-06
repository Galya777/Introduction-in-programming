//Галя Додова 45616 Информатика първа група 
#include <iostream>
using namespace std;
bool isprime(int p) {
	if (p < 2) {
		return false;
	}	for (int i = 0; i <= p; i++) {
			if (p % i == 0) {
				return false;
			}
		}
	return true;
}
int findthenumbers(int p=1000) {
	while (isprime(p) == false) {
		p--;
	}
	if (p % 10 == 3) {
		for (int i = 0; i < p+2; i++) {
			for (int j = 2; j < p; j++) {
				if (isprime(i) == true && isprime(j) == true&&(p+2)%i==0&&(p+2)%j==0) {
					if (i != 5 && j != 5&& j-i==2) {
						return p;
					}
				}
			}
		}
	}else {
		p--;
		findthenumbers(p);
	}

}
void proof(int n) {
	if (n >= 7) {
		for (int i = n; i < 2 * n; i++) {
			for (int j = n + 2; i < (2 * n)-2; i++) {
				if (isprime(i) && isprime(j) && abs(i - j) == 2) {
					cout << "YES!"<<" ";
				}
			}
		}
	}
	else {
		cout << "NO!" << " ";
	
	}
} //Toва е доказателството на 2б. Има го разписано, но реших да го тествам и като код. 
int main()
{
	cout << findthenumbers(1000)<< " "<<endl;
	int n;
	cin >> n;
	proof(n);
	return 0;
}

