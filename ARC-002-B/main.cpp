#include <bits/stdc++.h>
using namespace std;

struct date {
    int year;
    int month;
    int day;
};

date create_date(int year, int month, int day) {
    date res = { year, month, day };
    return res;
}

bool is_leap_year(int year) {
    if (year % 400 == 0) {
        return true;
    }
    if (year % 100 == 0) {
        return false;
    }
    if (year % 4 == 0) {
        return true;
    }
    return false;
}

date next_date(const date& now) {
    int final_day = 0;
    switch (now.month) {
        case 2 : {
            if (is_leap_year(now.year)) {
                final_day = 29;
            } else {
                final_day = 28;
            }
            break;
        }
        case 4 : case 6 : case 9 : case 11 : {
            final_day = 30;
            break;
        }
        default : {
            final_day = 31;
        }
    }
    if (now.day >= final_day) {
        if (now.month == 12) {
            return create_date(now.year + 1, 1, 1);
        } 
        return create_date(now.year, now.month + 1, 1);
    }
    return create_date(now.year, now.month, now.day + 1);
}

bool check_dividable(const date& now) {
    if (now.year % now.month != 0) {
        return false;
    }
    int buf = now.year / now.month;
    if (buf % now.day != 0) {
        return false;
    }
    return true;
}

string create_month_and_day(int n) {
    if (n <= 9) {
        return "0" + to_string(n);
    }
    return to_string(n);
}

int main() {
    int year, month, day;
    string buffer;
    cin >> buffer;
    year = stoi(buffer.substr(0, 4));
    month = stoi(buffer.substr(5, 2));
    day = stoi(buffer.substr(8, 2));
    date now = create_date(year, month, day);
    while (true) {
        if (check_dividable(now)) {
            cout << now.year << '/'
                 << create_month_and_day(now.month) << '/'
                 << create_month_and_day(now.day) << endl;
            return 0;
        }
        now = next_date(now);
    }
}
