#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x1, y1, lenght1, width1;
    float x2, y2, lenght2, width2;
    cout << "Enter coordinats, length and width for two reactangles: "<<endl;
    cin >> x1 >> y1 >> lenght1 >> width1;
    cin >> x2 >> y2 >> lenght2 >> width2;
    if (lenght1 > 0 && width1 > 0 && lenght2 > 0 && width2 > 0) {
        //проверяваме дали точката на първия правоъгълник е вътрешна за втория
        if (x2 > x1 && y2 > y1 && x2 < lenght1 + x1 && y2 < width1 + y1) {
            float newlenght = abs(x2 - lenght1);
            float newwidth = abs(y2 - width1);
            float square = newlenght * newwidth;
            cout << square << endl;
        }//проверяваме дали точката на втория правоъгълник е вътрешна за първия
        else if (x1 > x2 && y1 > y2 && x1 < lenght2 + x2 && y1 < width2 + y2) {
            float newlenght = abs(x1 - lenght2);
            float newwidth = abs(y1 - width2);
            float square = newlenght * newwidth;
            cout << square << endl;
        }
        else { //в случай, че е външна точка или лежи на страните на правоъгълника, лицето е равно на нула
            cout << 0;
        }


    }
    return 0;
}
