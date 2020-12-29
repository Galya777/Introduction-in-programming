// СУ "Св. Климент Охридски"
// Факултет по математика и информатика
// Курс Увод в програмирането 2020/21
// Контролно 1
// 2020-11-29
//
// Начален час: <тук попълнете часа за вашата група>
// Име: Галя Георгиева Додова
// ФН: 45616
// Специалност:Информатика
// Курс: 1
// Административна група: 1
// Използван компилатор: Visual Studio Local Windows Debugger
//
#include <iostream>
using namespace std;
int main()
{
    const int SIZE_OF_ENTERANCE = 4;
    unsigned number1, number2;
    cin >> number1 >> number2;
    unsigned mask = 1<<(SIZE_OF_ENTERANCE-1);
        bool firstbit1 = number1 & mask;
        bool firstbit2 = number2 & mask;
        number1 >>= mask;
        number2 >>= mask;
        bool secondbit1 = number1 & mask;
        bool secondbit2 = number2 & mask;
        number1 >>= mask;
        number2 >>= mask;
        bool thirdbit1 = number1 & mask;
        bool thirdbit2 = number2 & mask;
        number1 >>= mask;
        number2 >>= mask;
        bool fourthbit1 = number1 & mask;
        bool fourthbit2 = number2 & mask;
        number1 >>= mask;
        number2 >>= mask;

        if (firstbit1 | firstbit2 == 0) {
                cout << 0;
                if (secondbit1 | secondbit2 == 0) {
                        cout << 0;
                    }else {
                        cout << 1;
                    }
                if (thirdbit1 | thirdbit2 == 0) {
                    cout << 1;
                    if (fourthbit1 | fourthbit2 == 0) {
                        cout << 0;
                    }
                    else {
                        cout << 1;
                    }
                }
                else {
                    cout << 1;
                }
            }else {
                cout << 1;
                if (secondbit1 | secondbit2 == 0) {
                    cout << 0;
                }
                else {
                    cout << 1;
                }
                if (thirdbit1 | thirdbit2 == 0) {
                    cout << 1;
                    if (fourthbit1 | fourthbit2 == 0) {
                        cout << 0;
                    }
                    else {
                        cout << 1;
                    }
                }
                else {
                    cout << 1;
                }
            }
             
      
    return 0;
}

