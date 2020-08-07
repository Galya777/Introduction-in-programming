#include <iostream>
#include <random>
#include <time.h>
#include <cstring>
#pragma warning (disable: 4996);
using namespace std;
const int MAX_EXCLAMS = 11;
const int WORDS = 5;
const int COL = 5;
const int MAX_WORD_SIZE = 30;
const char exclamations[][MAX_WORD_SIZE] = { "Shock","Nechuvana naglost","Skandal","Exclusivno","Neweroyatno","Novinata na veka" };
const char subjects[][MAX_WORD_SIZE] = { "Baba","Dyado","Vlak","Ryapa","Kmet","Kotka","Kuche","Chudovishte","Chovek","Princesa","Bager" };
const char objects[][MAX_WORD_SIZE] = { "baba","dyado","vlak","ryapa","kmet","kotka","kuche","chudovishte","chovek","princesa", "sklad","magazin","pazar","uchilishte","bager" };
const char verbs[][MAX_WORD_SIZE] = { "sgazi","zadiga","namiga na","tarachi","precaka","zadiga","ubi","celuna","izqde","udari" };


char* generateArr(const char* word) {
	int length = strlen(word);
	char* arr = new (nothrow) char[length + 1];
	if (!arr) {
		return nullptr;
	}
	strcpy(arr, word);
	return arr;
}

int findRandomIndex() {
	return rand() % COL;
}

void outputArr(char** arr, int rows) {
	for (int i = 0; i < rows; i++)
	{
		cout << arr[i];
		if (i != 0) {
			cout << " ";
		}
	}
	cout << endl;
}

void clearMatrixByRows(char** matrix, int rows) {
	for (int i = 0; i < rows; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
}

char** allocMatrixByRows(int rows, char action[], char object[], char subject[], char exclamination[], char marks[]) {
	char** matrix = new(nothrow) char* [rows];
	if (!matrix) return matrix;

	int columns;
	for (int i = 0; i < rows; ++i) {
		if (i == 0) {
			columns = strlen(exclamination) + 1;
		}
		else if (i == 1) {
			columns = strlen(marks) + 1;
		}
		else if (i == 2) {
			columns = strlen(subject) + 1;
		}
		else if (i == 3) {
			columns = strlen(action) + 1;
		}
		else if (i == 4) {
			columns = strlen(object) + 1;
		}
		matrix[i] = new(nothrow) char[columns];
		if (!matrix[i]) {
			clearMatrixByRows(matrix, i);
			return nullptr;
		}
	}
	return matrix;
}

void fillArr(char** arr, int rows, char action[], char object[], char subject[], char exclamination[], char marks[]) {
	strcpy(arr[0], exclamination);
	strcpy(arr[1], marks);
	strcpy(arr[2], subject);
	strcpy(arr[3], action);
	strcpy(arr[4], object);
}

int main() {
	int n, length, index;
	cout << "Enter the number of headings:  ";
	cin >> n;
	srand(time(NULL));

	int count = 0;
	for (int i = 0; i < n; i++)
	{
		index = findRandomIndex();
		char* action = generateArr(verbs[index]);
		index = findRandomIndex();
		char* object = generateArr(objects[index]);
		index = findRandomIndex();
		char* subject = generateArr(subjects[index]);
		index = findRandomIndex();
		char* exclamination = generateArr(exclamations[index]);

		int countOfMarks = (rand() % 8) + 3; //áðîé óäèâèòåëíè
		char* marks = new (nothrow) char[countOfMarks + 1];
		if (!action || !object || !subject || !exclamination || !marks) {
			cout << "No enough memory";
			return 0;
		}

		for (int i = 0; i < countOfMarks; i++)
		{
			marks[i] = '!';
		}
		marks[countOfMarks] = '\0';

		char** arr = allocMatrixByRows(WORDS, action, object, subject, exclamination, marks);
		if (!arr) {
			cout << "No enough memory" << endl;
		}
		else {
			fillArr(arr, WORDS, action, object, subject, exclamination, marks);
			delete[] action;
			delete[] object;
			delete[] subject;
			delete[] exclamination;
			delete[] marks;

			outputArr(arr, WORDS);
			clearMatrixByRows(arr, WORDS);
		}
	}
	return 0;
}
