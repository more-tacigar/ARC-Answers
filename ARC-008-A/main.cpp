#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a = (N % 10) * 15 + (N / 10) * 100;
    int b = ((N / 10) + 1) * 100;
    cout << min(a, b) << endl;
}
