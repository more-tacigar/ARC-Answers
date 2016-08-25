#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N <= 1) {
        cout << "NO" << endl;
        return 0;
    }
    if (N % 2 == 0) {
        if (N == 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        return 0;
    }
    for (int i = 3; i * i <= N; i += 2) {
        if (N % i == 0) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}
