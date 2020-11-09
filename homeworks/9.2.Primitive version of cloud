#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int main()
{
	int extencion;
	string disk,group,folder,filename,extentione,extnew,ext;
	char answer;
	char separator;
	cout << "Number of extencions: ";
	cin >> extencion;
	for (int i = 0; i < extencion; i++) {
		cout << "-Enter file extension: ";
		cin >> ext;
		do {
			cin >> separator >> disk >> separator >> group >> folder >> filename >> extnew;
			if (separator != '/' || separator != '\\') {
				cout << "- error! Wrong input. Try again. " << endl;
				break;
			}
			if (extnew != ext) {
				cout << "- error! The cloud does not recognise this file extension. Try again. " << endl;
				break;
			}
			if ((int(disk[0]) < 65) || (int(disk[0]) > 90)) {
				cout << "- error! Wrong input. Try again. " << endl;
				break;
			}
			if (char(extnew[0]) != '.') {
				cout << "- error! Wrong input. Try again. " << endl;
				break;
			}
			cout << "- Success! File successfully uploaded! " << endl;
			cout << "Do you want to add more files?" << endl;
			cin >> answer;
		} while (answer == 'Y');
	}
	return 0;
}


