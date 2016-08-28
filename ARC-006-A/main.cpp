#include <iostream>
using namespace std;

int main() {
    int E[6], L[6], B;
    for (int i = 0; i < 6; i++) {
        cin >> E[i];
    }
    cin >> B;
    for (int i = 0; i < 6; i++) {
        cin >> L[i];
    }
    int count = 0;
    bool flag = false;
    for (int i = 0; i < 6; i++) {
        int tmp = L[i];
        for (int j = 0; j < 6; j++) {
            if (tmp == E[j]) {
                count++;
                break;
            }
        }
        if (tmp == B) {
            flag = true;
        }
    }
    switch (count) {
        case 6: cout << 1 << endl; break;
        case 5: {
            if (flag) { cout << 2 << endl; break; }
            else      { cout << 3 << endl; break; }
        }
        case 4: cout << 4 << endl; break;
        case 3: cout << 5 << endl; break;
        default: cout << 0 << endl; break;
    }
    return 0;
}
