#include <bits/stdc++.h>
using namespace std;

int compare_core(int x, int y, const vector<int>& b) {
    int nx, ny;
    for (int i = 0; i < 10; i++) {
        if (x == b[i]) {
            nx = i;
        }
        if (y == b[i]) {
            ny = i;
        }
    }
    return nx < ny;
}

int main() {
    vector<int> a, b;
    for (int i = 0; i < 10; i++) {
        int tmp;
        cin >> tmp;
        b.push_back(tmp);
    }
    
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }

    sort(a.begin(), a.end(), [b](int x, int y) -> int {
            int bx = x, by = y;
            string sx = to_string(x), sy = to_string(y);
            if (sx.size() != sy.size()) {
                return x < y;
            }
            for (int i = 0; i < sx.size(); i++) {
                int cx = sx[i] - '0', cy = sy[i] - '0';
                if (cx != cy) {
                    return compare_core(cx, cy, b);
                }
            }
            return 0;
        });
    for (int i = 0; i < N; i++) {
        cout << a[i] << endl;
    }
}
