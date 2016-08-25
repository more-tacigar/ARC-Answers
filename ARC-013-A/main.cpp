#include <iostream>
using namespace std;

int main() {
    int N, M, L, P, Q, R;
    cin >> N >> M >> L;
    cin >> P >> Q >> R;

    // six patterns
    int tmp = 0;
    int max = 0;
    tmp = (N / P) * (M / Q) * (L / R); if (max < tmp) max = tmp;
    tmp = (N / P) * (M / R) * (L / Q); if (max < tmp) max = tmp;
    tmp = (N / Q) * (M / P) * (L / R); if (max < tmp) max = tmp;
    tmp = (N / Q) * (M / R) * (L / P); if (max < tmp) max = tmp;
    tmp = (N / R) * (M / P) * (L / Q); if (max < tmp) max = tmp;
    tmp = (N / R) * (M / Q) * (L / P); if (max < tmp) max = tmp;
    cout << max << endl;
    
    return 0;
}
