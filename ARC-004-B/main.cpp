#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    vector<int> d;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        d.push_back(tmp);
    }
    int max = 0;
    int sum = 0;
    for (int i = 0; i < N; i++) {
        if (max < d[i]) max = d[i];
        sum += d[i];
    }
    cout << sum << endl;
    if (sum - max > max) {
        cout << 0 << endl;
    } else {
        cout << max - (sum - max) << endl;
    }
    return 0;
}
