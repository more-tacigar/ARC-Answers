#include <bits/stdc++.h>
using namespace std;

int const TEMP_SIZE = 6;
int const TEMP_DIFFS[] = {1, 5, 10, -1, -5, -10};

int select_diff(int from_temp, int to_temp) {
    int min_diff = std::numeric_limits<int>::max(), min_index = 0;
    for (int i = 0; i < TEMP_SIZE; i++) {
        int buffer = abs(to_temp - from_temp - TEMP_DIFFS[i]);
        if (buffer < min_diff) {
            min_diff = buffer;
            min_index = i;
        }
    }
    return TEMP_DIFFS[min_index];
}

int main() {
    int from_temp, to_temp, count = 0;
    cin >> from_temp >> to_temp;
    while (from_temp != to_temp) {
        count++;
        int diff = select_diff(from_temp, to_temp);
        from_temp += diff;
    }
    cout << count << endl;
}
