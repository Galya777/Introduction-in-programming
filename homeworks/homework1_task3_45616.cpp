#include <iostream>
using namespace std;
bool yearhigh(int year) {
    if ((year % 4 == 0) && (year % 100 != 0) && (year % 400 == 0)) {
        return true;
    }
    return false;
}
bool validDateAndTime(int day, int mounth, int year, int hour, int minute, int second) {
    if (mounth <= 12 && year <= 9999 && hour <= 23 && minute <= 59 && second <= 59) {
        if (mounth == 1 || mounth == 3 || mounth == 5 || mounth == 7 || mounth == 8 || mounth == 10 || mounth == 12) {
            if (day <= 31) {
                return true;
            }
        }
        else if (mounth == 4 || mounth == 6 || mounth == 9 || mounth == 11) {
            if (day <= 30) {
                return true;
            }
        }
        else if (mounth == 2) {
            if (yearhigh(year)==true) {
                if (day <= 29) {
                    return true;
                }
                return false;
            }
            else {
                if (day <= 28) {
                    return true;
                }
                return false;
            }
            return true;
        }
    }
    return false;
}
int main()
{
    int day1, mounth1, year1, hour1, minute1, second1;
    int day2, mounth2, year2, hour2, minute2, second2;
    char delim1, delim2, delim3, delim4, points;
    cin >> day1 >> delim1 >> mounth1 >> delim2 >> year1>>hour1>>points>>minute1>>points>>second1;
    cin >> day2 >> delim3 >> mounth2 >> delim4 >> year2>>hour2 >> points >> minute2 >> points >> second2;
    if (validDateAndTime(day1, mounth1, year1,hour1,minute1, second1)&& validDateAndTime(day2, mounth2, year2, hour2, minute2, second2)) {
        int year, day, mounth, hour, minute, second;
        if (year2 > year1) {
             year = abs(year2 - year1);
             mounth = mounth2 - mounth1;
             day = day2 - day1;
             hour = hour2 - hour1;
             minute = minute2 - minute1;
             second = second2 - second1;
        }else if (year1 == year2) {
            year = 0;
            if (mounth2 > mounth1) {
                mounth = abs(mounth2 - mounth1);
                day = day2 - day1;
                hour = hour2 - hour1;
                minute = minute2 - minute1;
                second = second2 - second1;
            } else if (mounth1 == mounth2) {
                mounth = 0;
                if (day2 > day1) {
                    day = abs(day2 - day1);
                    if (hour1 < hour2) {
                        hour = hour2 - hour1;
                        minute = minute2 - minute1;
                        second = second2 - second1;
                    }else if (hour1 == hour2) {
                        hour = 0;
                        minute = minute2 - minute1;
                        second = second2 - second1;
                    } else {
                        minute = minute1 - minute2;
                        second = second1 - second2;
                    }
                    hour = hour2 - hour1;
                    minute = minute2 - minute1;
                    second = second2 - second1;
                }
                else if (day2 == day1) {
                    day = 0;
                    hour = hour2 - hour1;
                    minute = minute2 - minute1;
                    second = second2 - second1;
                }  else {
                    day = day1 - day2;
                    hour = hour1 - hour2;
                    minute = minute1 - minute2;
                    second = second1 - second2;
                }
            } else{
                mounth = abs(mounth1 - mounth2);
                day = day1 - day2;
                hour = hour1 - hour2;
                minute = minute1 - minute2;
                second = second1 - second2;
            }
        }  else {
            year = abs(year1 - year2);
            mounth = mounth1 - mounth2;
            day = day1 - day2;
            hour = hour1 - hour2;
            minute = minute1 - minute2;
            second = second1 - second2;
        }
        if (mounth < 0) {
            year--;
            mounth += 12;
        } if (day < 0) {
            if (mounth == 1 || mounth == 3 || mounth == 5 || mounth == 7 || mounth == 8 || mounth == 10 || mounth == 12) {
                day += 31;
            }    else if (mounth == 4 || mounth == 6 || mounth == 9 || mounth == 11) {
                day += 30;
            }else if (mounth == 2) {
                if (yearhigh(year)) {
                    day += 28;
                }
                else {
                    day += 29;
                }
                mounth--;
        }
        } if (hour < 0) {
            day--;
            hour += 24;
        } if (minute < 0) {
            hour--;
            minute += 60;
        }if (second < 0) {
            minute--;
            second += 60;
        }

            day += year * 365 + mounth * 30;
            
            
            if (day != 0) {
                cout << day << '-';
            }
            if (hour < 10) {
                cout << '0';
            }
            cout << hour << ':';
            if (minute < 10) {
                cout << '0';
            }
            cout << minute << ':';
            if (second < 10) {
                cout << '0';
            }
            cout << second;
        
    } else {
        cout << "Invalid date/time!";
    }

    return 0;
}

