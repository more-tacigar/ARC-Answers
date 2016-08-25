#include <iostream>
#include <string>
using namespace std;

int main() {
    string day;
    cin >> day;
    if (day == "Monday") {
        cout << 5 << endl;
    } else if (day == "Tuesday") {
        cout << 4 << endl;
    } else if (day == "Wednesday") {
        cout << 3 << endl;
    } else if (day == "Thursday") {
        cout << 2 << endl;
    } else if (day == "Friday") {
        cout << 1 << endl;
    } else if (day == "Saturday" || day == "Sunday") {
        cout << 0 << endl;
    }
}
