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
bool isItPrime(int number) {
    for (int i = 1; i < number; i++) {
        if (number % i == 0 && i != 1&&i!=number) {
            return true;
        }
    }
    return false;
} int max(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    }
    else {
        return n2;
    }
} int min(int n1, int n2) {
    if (n1 < n2) {
        return n1;
    }
    else {
        return n2;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    int numberscount = 0;
    for (int i = min(a, b); i <= max(a, b); i++) {
        int counterofdivitors = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0 && j != 1&&j!=i) {
                counterofdivitors++;
            }    
        }
        if (isItPrime(counterofdivitors) == true) {
            numberscount++;
        }
    }
    cout << numberscount;
    return 0;
}
