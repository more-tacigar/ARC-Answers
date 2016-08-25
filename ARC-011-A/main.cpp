#include <iostream>
using namespace std;

int main() {
    int n, m, N;
    cin >> m >> n >> N;
    int hold_used = 0;
    int sum = 0;
    for (;;) {
        sum += N;
        if (N + hold_used < m) {
            cout << sum << endl;
            return 0;
        }
        int tmp = (N + hold_used) / m * n;
        hold_used = (N + hold_used) % m;
        N = tmp;
    }
}
