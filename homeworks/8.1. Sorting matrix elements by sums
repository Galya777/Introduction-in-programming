#include <iostream>
using namespace std;
int** dinamicMatrix(int rows, int cols)
{
	int** dinamicarray = new (std::nothrow) int* [rows];
	if (!dinamicarray)
		return nullptr;

	int count;
	for (count = 0; count < rows; count++) {
		dinamicarray[count] = new (std::nothrow) int[cols];
		if (!dinamicarray)
			break;
	}
	if (count < rows) {
		while (count > 0) {
			count--;
			delete[] dinamicarray[count];
		}
		delete[] dinamicarray;
		dinamicarray = nullptr;
	}

	return dinamicarray;
}
int main()
{
	unsigned int N, M;
	cin >> N >> M;
	int** pMat = dinamicMatrix(N, M);

	if (!pMat) {
		std::cout << "Not enough memory!" << std::endl;
		return 1;
	}
	int  RowSum = 0;
	const int MAX = 100;
	int i, j;
	int rowsumarray[MAX];
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			cin >> pMat[i][j];
			RowSum += pMat[i][j];
			rowsumarray[i] = RowSum;
		}
	}
	for ( i = 0; i < N - 1; i++) {
		int currIndex = 0;
		for (j = i + 1; j < M; j++) {
			if (rowsumarray[j] < rowsumarray[currIndex]) {
				currIndex = j;
			}
			if (i != currIndex) {
				swap(pMat[j], pMat[currIndex]);
			}
		}
	}
	for ( i = 0; i < N; i++)
	{
		for ( j = 0; j < M; j++)
		{
			cout << pMat[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

