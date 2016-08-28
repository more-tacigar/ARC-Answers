#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int sum;
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        sum += a * b;
    }
    cout << (static_cast<int>(sum * 1.05)) << endl;
}
