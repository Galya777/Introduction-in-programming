#include <iostream>
using namespace std;
const int MAX = 100;
void FillMatrix(int arr[][MAX], int rows, int cols)
{
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
			cin >> arr[row][col];
		}
	}
}
int findRowResult(int arr[][MAX], const int row, const int col) {
	int result = 1;
	for (int j = 0; j < col; j++)
	{
		result *= arr[row][j];
	}

	return result;
}

int findColResult(int arr[][MAX], const int row, const int col) {
	int result = 1;
	for (int i = 0; i < row; i++)
	{
		result *= arr[i][col];
	}

	return result;
}
void print(int arr[][MAX], const int rows, const int cols) {
	long rowResult = 1;
	long colResult = 1;
	bool isEqualResults = false;

	for (int i = 0; i < rows; i++)
	{
		rowResult = findRowResult(arr, i, cols);

		for (int j = 0; j < cols; j++)
		{
			colResult = findColResult(arr, rows, j);

			if (rowResult == colResult) {
				cout << i << ", " << j << " " << endl;
				isEqualResults = true;
			}

			colResult = 1;
		}
		rowResult = 1;
	}

	if (!isEqualResults) {
		cout << "No match";
	}
}

int main()
{
	int array[MAX][MAX];
	int N, M;
	cin >> N >> M;
	if ((N <= 100) && (M <= 100)) {
		 FillMatrix(array, N, M);
		 print(array,N,M);
		
	}
	return 0;
}
