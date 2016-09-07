#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    string name, kit;
    cin >> N >> M >> name >> kit;

    int sum = 1;
    
    map<char, int> kitmap;
    for (int i = 0; i < kit.size(); i++) {
        kitmap[kit[i]]++;
    }

    for (int i = 0; i < name.size(); i++) {
        if (kitmap[name[i]] <= 0) {
            sum++;
            for (int i = 0; i < kit.size(); i++) {
                kitmap[kit[i]]++;
            }
        }
        if (kitmap[name[i]] <= 0) {
            cout << -1 << endl;
            return 0;
        }
        kitmap[name[i]]--;
    }
    cout << sum << endl;
}
