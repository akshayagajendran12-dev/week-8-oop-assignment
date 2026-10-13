#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;

bool isLeapYear(int year) {
    return (year % 400 == 0) ||
           (year % 4 == 0 && year % 100 != 0);
}

int daysInMonth(int month, int year) {
    int days[] = {31, 28, 31, 30, 31, 30,
                  31, 31, 30, 31, 30, 31};

    if (month == 2 && isLeapYear(year))
        return 29;

    return days[month - 1];
}

void addDays(int &day, int &month, int &year, int days) {
    for (int i = 0; i < days; i++) {
        day++;

        if (day > daysInMonth(month, year)) {
            day = 1;
            month++;

            if (month > 12) {
                month = 1;
                year++;
            }
        }
    }
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        string plan, name, date;
        cin >> plan >> name >> date;

        int year, month, day;
        char dash1, dash2;

        stringstream ss(date);
        ss >> year >> dash1 >> month >> dash2 >> day;

        int validity = 0;

        if (plan == "BASIC") {
            validity = 30;
        } else if (plan == "STANDARD") {
            validity = 90;
        } else if (plan == "PREMIUM") {
            validity = 365;
        }

        addDays(day, month, year, validity);

        cout << name << ": "
             << setfill('0')
             << setw(4) << year << "-"
             << setw(2) << month << "-"
             << setw(2) << day
             << setfill(' ') << '\n';
    }

    return 0;
}
