#include <iostream>
#include <cstring>
#pragma warning (disable:4996);
using namespace std;
const int MAX_TEXT = 1024;
const int MAX_WORD = 64;
bool isItWord(char word) {
    if ((word >= 'a' && word <= 'z') || (word >= 'A' && word <= 'Z')) {
        return true;
    }
    else {
        return false;
    }
} int NumOfWords(char* text) {
    int counter = 0;
    while (*text) {
        while (*text&& !isItWord(*text)) {
            text++;
        } if (*text) {
            counter++;
        } while (isItWord(*text)) {
            text++;
        }
    }
    return counter;
}
int RepeatingWord(char arr[][MAX_WORD],int length,char* symbol) {
    for (int i = 0; i < length; i++) {
        if (strcmp(arr[i], symbol) == 0) {
            return i + 1;
        }
    }
    return false;
}
void Add(char arr[][MAX_WORD], int length, char* symbol,int numberOfWords[]) {
    int index = RepeatingWord(arr, length, symbol) - 1;
    numberOfWords[index] += 1;
}
void print(char arr[][MAX_WORD], int len, int numberOfWords[]) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " - " << numberOfWords[i] << endl;
    }
}
void Sorting(char arr[][MAX_WORD], int len, int numberOfWords[]) {
    bool alreadySorted = false;
    int onThisPlace = 0;
    do {
        alreadySorted = false;

        for (int i = len - 1; i > onThisPlace; i--)
        {
            if (numberOfWords[i - 1] < numberOfWords[i]) {
                alreadySorted = true;
                swap(numberOfWords[i - 1], numberOfWords[i]);
                swap(arr[i - 1], arr[i]);
            }
            else if (numberOfWords[i - 1] == numberOfWords[i]) {
                if (strcmp(arr[i - 1], arr[i]) > 0) {
                    alreadySorted = true;
                    swap(numberOfWords[i - 1], numberOfWords[i]);
                    swap(arr[i - 1], arr[i]);
                }
            }
        }
        onThisPlace++;

    } while (alreadySorted);
}
void theEnd(char* text) {
    while (*text) {
        if (*text == '#') {
            *text = '\0';
            text--;
        }
        text++;
    }
}
int main()
{
    cout << "Enter text: ";
    char text[MAX_TEXT];
    char word[MAX_TEXT][MAX_WORD];
    int numOfWords[MAX_TEXT];
    cin.getline(text, MAX_TEXT);
        theEnd(text);
   cout << "All words: " << NumOfWords(text) << endl;
    int len = strlen(text);
    char current[MAX_WORD];
    int start = 0;
    int count = 0;
    for (int i = 0; i < len; i++) {
        while (i < len && !isItWord(text[i])) {
            i++;
        }

        start = i;
        while (isItWord(text[i])) {
            current[i - start] = text[i];
            i++;
        }
        current[i - start] = '\0';

        if (RepeatingWord(word, count, current)) {
            Add(word, count, current, numOfWords);
        }
        else {
            strcpy(word[count], current);
            numOfWords[count] = 1;
            count++;
        }

    }
    cout << "Distinct words: " << count << endl;

    Sorting(word, count, numOfWords);
    print(word, count, numOfWords);
    return 0;
}
