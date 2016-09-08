#include <bits/stdc++.h>
using namespace std;

char matrix[8][8];

bool check_enable_set(int i, int j) {
    for (int ii = 0; ii < 8; ii++) {
        if (matrix[ii][j] == 'Q') {
            return false;
        }
    }
    for (int ij = 0; ij < 8; ij++) {
        if (matrix[i][ij] == 'Q') {
            return false;
        }
    }
    for (int x = 0; i+x < 8 && j+x < 8; x++) {
        if (matrix[i+x][j+x] == 'Q') {
            return false;
        }
    }
    for (int x = 0; i-x > -1 && j+x < 8; x++) {
        if (matrix[i-x][j+x] == 'Q') {
            return false;
        }
    }
    for (int x = 0; i-x > -1 && j-x > -1; x++) {
        if (matrix[i-x][j-x] == 'Q') {
            return false;
        }
    }
    for (int x = 0; i+x < 8 && j-x > -1; x++) {
        if (matrix[i+x][j-x] == 'Q') {
            return false;
        }
    }
    return true;
}

bool set_queen(const vector<int>& must_put, int i) {
    for (int j = 0; j < 8; j++) {
        if (check_enable_set(must_put[i], j)) {
            matrix[must_put[i]][j] = 'Q';

            if (i == must_put.size() - 1) {
                return true;
            }
            bool b = set_queen(must_put, i + 1);
            if (b) {
                return true;
            }
            matrix[must_put[i]][j] = '.';
        }
    }
    return false; 
}

int main() {
    vector<int> must_put;
    
    for (int i = 0; i < 8; i++) {
        bool flag = true;
        for (int j = 0; j < 8; j++) {
            char tmp;
            cin >> tmp;

            if (tmp == 'Q') {
                flag = false;
                if(!check_enable_set(i, j)) {
                    cout << "No Answer" << endl;
                    return 0;
                }
            }

            matrix[i][j] = tmp;
        }
        if (flag) {
            must_put.push_back(i);
        }
    }
    if (set_queen(must_put, 0)) {
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cout << matrix[i][j];
            }
            cout << endl;
        }
    } else {
        cout << "No Answer" << endl;
    }
}
