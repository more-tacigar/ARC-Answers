#include <iostream>
#include <string>
using namespace std;

int main() {
    char X;
    string S;
    cin >> X;
    cin >> S;
    for (int i = 0; i < S.size(); i++) {
        if (S[i] != X) {
            cout << S[i];
        }
    }
    cout << endl;
}
