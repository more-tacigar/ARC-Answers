#include <bits/stdc++.h>
using namespace std;

int main() {
    int year;
    cin >> year;
    if (year % 400 == 0) {
        cout << "YES" << endl;
        return 0;
    }
    if (year % 100 == 0) {
        cout << "NO" << endl;
        return 0;
    }
    if (year % 4 == 0) {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}
