// �� "��. ������� ��������"
// �������� �� ���������� � �����������
// ���� ���� � �������������� 2020/21
// ��������� 1
// 2020-11-29
//
// ������� ���: <��� ��������� ���� �� ������ �����>
// ���: ���� ��������� ������
// ��: 45616
// �����������: �����������
// ����: 1
// ��������������� �����: 1
// ��������� ����������: Visual Studio Local Windows Debugger

#include <iostream>
using namespace std;
const int MAX_SIZE = 10000;
int abs(int a) {
    if (a < 0) {
        return -a;
    }
    else {
        return a;
    }
}
int main()
{
    int n;
    float num;
    int row[MAX_SIZE];
    bool solution = false;
    int solutionNumber = 0;
    int diff = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        row[i] = num;
    } for(int i=0;i<n;i++){
        for (int k=i; k < n - 1; k++) {
            if (abs(row[k+i] - row[i]) == abs(row[i] - row[k-i])) {
                solutionNumber = k;
                diff = row[i + k] - row[i];
                solution = true;
            }
        }
    } if (solution == true) {
        cout << solutionNumber << " " << diff;
    }else {
                cout << "No solution";
            }
    return 0;
}