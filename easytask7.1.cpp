#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;
unsigned long const MAX = 9'223'372'036'854'775'807;

unsigned long randomKey() {
    srand(time(NULL));
    return rand() * rand();
}

void GenerateKey(unsigned long pass, int& count, int random) {
    long search = randomKey();
    long min = 0;
    long max = MAX;
    bool searching = true;
    if (random) {
        cout << "Random searching start:" << endl;
    }
    else {
        cout << "Default searching start:" << endl;
    }
	while (searching)
	{
		cout << search << endl;
		if (search == pass) {
			cout << "Key is " << search<< endl;
			searching = false;
		}
		else {
			if (pass < search) {
				max = search;
			}
			else {
				min = search;
			}

			if (random) {
				long differenceBetweenMaxAndMin = max - min;
				search = min + randomKey() % differenceBetweenMaxAndMin + 1;
			}
			else {
				search = (max+ min) / 2;
			}

			count++;
		}
	}
}
	
int main()
{
    srand(time(NULL));
    long number = randomKey();
	cout << "Key= " << number << endl;

	int firstCounter = 1, secondCounter = 1;
	int random = true;

	GenerateKey(number, firstCounter, !random);
	GenerateKey(number, secondCounter, random);

	cout << endl;
	cout << "Default binary searching: " << firstCounter << " tries" << endl;
	cout << "Random binary searching: " << secondCounter << " tries" << endl;

	return 0;
}