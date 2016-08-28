#include <iostream>
using namespace std;

int main() {
    int Matrix[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> Matrix[i][j];
        }
    }
    for (int i = 1; i < 3; i++) {
        for (int j = 1; j < 3; j++) {
            if (Matrix[i][j] == Matrix[i+1][j] ||
                Matrix[i][j] == Matrix[i-1][j] ||
                Matrix[i][j] == Matrix[i][j+1] ||
                Matrix[i][j] == Matrix[i][j-1]) {
                cout << "CONTINUE" << endl;
                return 0;
            }
        }
    }
    if (Matrix[0][0] == Matrix[1][0] ||
        Matrix[0][0] == Matrix[0][1] ||
        Matrix[3][0] == Matrix[2][0] ||
        Matrix[3][0] == Matrix[3][1] ||
        Matrix[0][3] == Matrix[0][2] ||
        Matrix[0][3] == Matrix[1][3] ||
        Matrix[3][3] == Matrix[2][3] ||
        Matrix[3][3] == Matrix[3][2]) {
        cout << "CONTINUE" << endl;
        return 0;
    }
    cout << "GAMEOVER" << endl;
}
