#include <iostream>
using namespace std;
bool excistingSerial(int serial, int Serials[][3], int counter) {
	for (int i = 0; i < counter-1; ++i) {
		if (Serials[i][0] == serial) {
			return true;
		}
	}
	return false;
}
int getUpBits(int number) {
	if (number == 0) {
		return 0;
	}
	return (number & 1) + getUpBits(number >> 1);
}
int main()
{
	char command;
	int counter = 0;
	int Serials[64][3];
	int serialNumber;
	int chanels;
	int firstChanel;
	do {
		cout << "Enter your command: ";
		cin >> command;
		if (command == 'a') {
			cout << "Enter serial number: ";
			cin >> serialNumber;
			while (excistingSerial(serialNumber,Serials, counter) == true) {
				cout << "This serial number is excisting already!\n";
				cin >> serialNumber;
			} if (serialNumber % getUpBits(serialNumber) != 0) {
				cout << "The projector is fake!";
				cin >> serialNumber;
			}
			else {
				Serials[counter][0] = serialNumber;
				cout << "\nEnter number of the chanels: ";
				cin >> chanels;
				
				while (chanels > 512) {
					cout << "Too many channels!";
					cin >> chanels;
				}Serials[counter][1] = chanels;
				cout << "\nEnter the first channel: ";
				cin >> firstChanel;
				Serials[counter][2] = firstChanel;
				++counter;
				if (counter == 64) {
					cout << "\nNo more space for projectors!";
				}
			}
		}
		else if (command == 'r') {
			cout << "Enter serial number: ";
			cin >> serialNumber;
			if (excistingSerial(serialNumber, Serials, counter) == true) {
				int number;
				for (int i = 0; i < counter - 1; ++i) {
					if (Serials[i][0] == serialNumber) {
						number = i;
					}
				}
				for (int i = number; i < counter- 1; i++)
					for(int j=0; j<3; ++j)
					Serials[i][j] = Serials[i + 1][j];
				counter--;
			}
			else {
				cout << "This serial number is not excisting!\n";
			}
		}
		else if (command == 'm') {
			int newChanel;
			cout << "\nEnter the current channel: ";
			cin >> firstChanel;
			cout << "\nEnter the current channel: ";
			cin >> newChanel;
			if (firstChanel>512||newChanel>512) {
				*Serials[newChanel] = *Serials[firstChanel];
			}
			else {
				cout << "Invalid projector or position!";
			}
		}
		else if (command == 'p') {
			for (int i = 0; i < 512; ++i) {
				for (int j = 0; j < 3; ++j) {
					if (Serials[i][2] != 0) {
						cout << 'o';
					}
					else {
						cout << '_';
					}
				}
			}
		}

	} while (command != 'e');
	
	return 0; 
}

