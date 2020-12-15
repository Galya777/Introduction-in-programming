#include <iostream>
using namespace std;
void transfer(long long minutes, long long hour){
    if (minutes >= 60) {
        hour++;
        minutes -= 60;
    }
}
long long format(int number, long long hours) {
    unsigned int mask = 1 << 12;

    if ((number & mask) == 0) {
        if (hours > 12) {
            hours -= 12;
        }
    }  else {
        if (hours < 12) {
            hours +=12;
        }
    } if (hours > 24) {
        hours -= 24;
    }
    return hours;
}
int main()
{
    unsigned int number1, number2;
    cin >> number1 >> number2;
    unsigned short num1min =(number1&(1<<6)-1);
    number1 >> 6;
    unsigned short num1h = (number1 & (1 << 6) - 1);
    unsigned short num2min =(number2&(1<<6)-1);
    number2 >> 6;
    unsigned short num2h = (number2 & (1 << 6) - 1);
    num1h = format(number1, num1h);
    num2h = format(number2, num2h);
    transfer(num1min, num1h);
    transfer(num2min, num2h);
    cout << num1h << ':' << num1min<<endl;
    cout << num2h << ':' << num2min<<endl;
    unsigned short diffhours = abs(num1h - num2h);
    unsigned short diffminutes = abs(num1min - num2min);
    transfer(diffminutes, diffhours);
    cout << "dif: " << diffhours << ':';
    if (diffminutes < 10) {
        cout << '0';
    }
         cout<< diffminutes;
    return 0;
}

