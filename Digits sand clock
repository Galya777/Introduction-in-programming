#include <iostream>
using namespace std;
int main()
{
	int n;
	const int width = 5;
	cout << "n= ";
	cin >> n;
	for (int row = n; row > 1; --row) {

		for (int i = 0; i < n - row; ++i) {
			for (int j = 0; j < width; ++j) cout << ' ';
		}


		for (int num = 1; num < row; ++num) {
			cout.width(width);
			cout << num;
		}


		for (int num = row; num > 0; --num) {
			cout.width(width);
			cout << num;
		}
		cout << endl;
	}

	for (int row = 1; row <= n; ++row) {
		
		for (int i = 0; i < n - row; ++i) {
			for (int j = 0; j < width; ++j) cout << ' ';
		}

		
		for (int num = 1; num < row; ++num) {
			cout.width(width);
			cout << num;
		}

		
		for (int num = row; num > 0; --num) {
			cout.width(width);
			cout << num;
		}
		cout << endl;
	}


	return 0;
}
//Кодът е взаимстван от лекции, като промените по него са само козметични. 
