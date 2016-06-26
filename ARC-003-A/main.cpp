#include <bits/stdc++.h>
using namespace std;

int main() {
    int num_credits, sum_points = 0;
    cin >> num_credits;
    for (int i = 0; i < num_credits; i++) {
        char buffer;
        cin >> buffer;
        switch (buffer) {
            case 'A' : sum_points += 4; break;
            case 'B' : sum_points += 3; break;
            case 'C' : sum_points += 2; break;
            case 'D' : sum_points += 1; break;
            case 'F' : sum_points += 0; break;
        }
    }
    cout << fixed << setprecision(14) << ((double)sum_points / num_credits) << endl;
}
