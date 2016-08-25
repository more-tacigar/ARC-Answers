#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M, A, B;
    
    cin >> N >> M >> A >> B;
    for (int i = 0; i < M; i ++) {
        // i + 1 が日数
        int tmp;
        cin >> tmp;

        if (N <= A) {
            N += B;
        }
        N -= tmp;
        if (N < 0) {
            cout << i + 1<< endl;
            return 0;
        }
    }
    cout << "complete" << endl;
}
