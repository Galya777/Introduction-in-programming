#include <iostream>
using namespace std;
const int MAX = 1000;
const int HAR = 4;//The haracteristics of every task are three and the bonus column I will add
const int MINUTES = 1;//the second coordinat is for minutes needed to do a task
const int POINTS = 2;//the third coordinat is for given points in every task
const int INDEX = 0;//the first coodrinat is the unique index of the task
void setCol(double arr[][HAR], double x, int index) {
    arr[index][HAR-1] = x;
}
void readArray(double array[][HAR], int size,int har)
{
	for (int i = 0; i < size; ++i) {
        for (int j = 0; j < har-1; ++j) {
            cin >> array[i][j];
        }	
	}
}
int lastTime(int days) {
    int time = 0;
    for (int i = 0; i < days; ++i) {
        int minutes;
        cin >> minutes;
        time += minutes;
    }
    return time;
}
void makeMatrixBigger(double arr[][HAR],unsigned size ) {
    int lastRow = size- 1;
    double importance[MAX];
    for (unsigned i = 0; i < size; ++i) {
            importance[i] = (double)arr[i][POINTS] / (double)arr[i][MINUTES];
        
        setCol(arr,importance[i],i);
    }
}
void sortTasks(double arr[][HAR], unsigned size) {
    for (unsigned i = 0; i < size - 1; ++i) {
        int currMaxIndex = i;
        for (unsigned j = i + 1; j < size; ++j)
            if (arr[j][HAR-1] >arr[currMaxIndex][HAR-1])
                currMaxIndex = j;
        if (i != currMaxIndex)
            std::swap(arr[i], arr[currMaxIndex]);
    }
}void printArr(double arr[][HAR], int size,int timeWeHave) {
    int tasks = 0;
    for (int i = 0; i < size; ++i) {  
        if (timeWeHave > 0) {
            timeWeHave -= arr[i][MINUTES];
            ++tasks;
        }else {
            break;
        }
    }
    cout << "Tasks: ";
    for (int i = 0; i < tasks; ++i) {
        cout << arr[i][INDEX];
        if (i != tasks-1) {
            cout << ", ";
        }
    }
    cout << endl;
    int hours=0;
    while (timeWeHave >= 60) {
        ++hours;
        timeWeHave -= 60;
    }if (timeWeHave < 0) {
        timeWeHave = 0;
    }
    cout << "Time remaining: "<<hours<<":"<<timeWeHave;
}
int main()
{
    int taskCount;
    cin >> taskCount;
    double haracteristics[MAX][HAR];
    readArray(haracteristics, taskCount, HAR);
    int days;
    cin >> days;
   int timeForStudying = lastTime(days);
    makeMatrixBigger(haracteristics, taskCount);
    sortTasks(haracteristics, taskCount);
   printArr(haracteristics,taskCount,timeForStudying);
    return 0;
}

