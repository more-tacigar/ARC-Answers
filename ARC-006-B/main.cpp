#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > matrix;

void print_matrix(const vector<vector<int> > &m) {
    cout << "[" << endl;
    for (int i = 0; i < m.size(); i++) {
        for (int j = 0; j < m[i].size(); j++) {
            cout << " " << m[i][j];
        }
        cout << endl;
    }
    cout << "]" << endl;
}

int main() {
    int N, L;
    {
        string tmp;
        getline(cin, tmp);
        istringstream is(tmp);
        is >> N >> L;
    }

    for (int i = 0; i < L; i++) {
        string tmp;
        getline(cin, tmp);

        vector<int> line;

        for (int j = 0; j < tmp.size(); j++) {
            if (j % 2 == 1) {
                switch (tmp[j]) {
                    case '-': line.push_back(1); break;
                    case ' ': line.push_back(0); break;
                }
            }
        }
        matrix.push_back(line);
    }
    
    // print_matrix(matrix);
    
    int success;
    {
        string tmp;
        getline(cin, tmp);
        for (int i = 0; i < N * 2 - 1; i++) {
            if (tmp[i] == 'o') {
                success = i / 2;
                break;
            }
        }
    }

    // cout << success << endl;

    if (matrix[0].size() == 0) {
        cout << 1 << endl;
        return 0;
    }
    
    int x = success, y = L - 1;

    for (;;) {
        if (y == -1) { // end loop
            cout << x + 1 << endl;
            return 0;
        }
        if (x >= 1 && matrix[y][x-1] == 1) {
            y--;
            x--;
        } else if (x <= N - 1 && matrix[y][x] == 1) {
            y--;
            x++;
        } else {
            y--;
        }
    }
    return 0;
}
