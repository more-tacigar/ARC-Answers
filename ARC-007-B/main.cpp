#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> disk;

    for (int i = 0; i <= N; i++) {
        disk.push_back(i); // diskはケース番号、値はCD
    }
    int pre = 0;
    for (int i = 0; i < M; i++) {
        int tmp;
        cin >> tmp;

        for (int j = 1; j <= N; j++) {
            if (disk[j] == tmp) {
                disk[j] = pre;
            }
        }
        pre = tmp;
    }
    for (int i = 1; i <= N; i++) {
        cout << disk[i] << endl;
    }
}
