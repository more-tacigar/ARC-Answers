#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int DA[13];

void initDA() {
    int sum = 0;
    for (int i = 1; i <= 12; i++) {
        DA[i] = sum;
        switch (i) {
            case 2:
                sum += 29;
                break;
            case 4: case 6: case 9: case 11:
                sum += 30;
                break;
            default:
                sum += 31;
                break;
        }
    }
}

bool holiday[367];

int calcDay(int m, int d) {
    return DA[m] + d;
}

void initHoliday() {
    for (int i = 1; i < 367; i++) {
        if (i % 7 == 0 || i % 7 == 1) {
            holiday[i] = true;
        }
    }
}

int main() {
    int N;
    cin >> N;
    initDA();
    initHoliday();
    vector<int> ds;
    for (int i = 0; i < N; i++) {
        int m, d;
        char c;
        cin >> m >> c >> d;
        ds.push_back(calcDay(m, d));
    }
    sort(ds.begin(), ds.end());
    for (int i = 0; i < N; i++) {
        int day = ds[i];
        if (holiday[day]) {
            for (int j = day; j < 367; j++) {
                if (!holiday[j]) {
                    holiday[j] = true;
                    break;
                }
            }
        } else {
            holiday[day] = true;
        }
    }
    int max = 0;
    int sum = 0;
    for (int i = 1; i < 367; i++) {
        if (holiday[i]) {
            sum++;
        } else {
            if (sum > max) {
                max = sum;
            }
            sum = 0;
        }
    }
    if (sum > max) {
        max = sum;
    }
    cout << max << endl;
}
        
