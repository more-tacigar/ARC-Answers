#include <bits/stdc++.h>
using namespace std;

// まだGoで提出出来ない頃だった

int matrix[9][9];

struct Point {
    int x, y;
    Point() :x(0), y(0) {}
    Point(int gx, int gy) :x(gx), y(gy) {}
    friend Point operator+(Point p1, Point p2) {
        return Point(p1.x + p2.x, p1.y + p2.y);
    }
};

struct Cursor {
    Point p, d;
    int move() {
        int res = matrix[p.x-1][p.y-1];
        Point tmp = p + d;
        if ((tmp.x == 10 && tmp.y == 10) ||
            (tmp.x == 10 && tmp.y ==  0) ||
            (tmp.x ==  0 && tmp.y == 10) ||
            (tmp.x ==  0 && tmp.y ==  0)) {
            d.x = -d.x;
            d.y = -d.y;
            p = p + d;
            return res;
        }
        if (tmp.x >= 10 || tmp.x <= 0) {
            d.x = -d.x;
            p = p + d;
            return res;
        }
        if (tmp.y >= 10 || tmp.y <= 0) {
            d.y = -d.y;
            p = p + d;
            return res;
        }
        p = tmp;
        return res;
    }
};

int main() {
    string dir;
    Cursor c;

    cin >> c.p.y >> c.p.x >> dir;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            char tmp;
            cin >> tmp;
            matrix[i][j] = (int)(tmp - '0');
        }
    }
    if (dir == "R") {
        c.d = Point(0, 1);
    } else if (dir == "L") {
        c.d = Point(0, -1);
    } else if (dir == "U") {
        c.d = Point(-1, 0);
    } else if (dir == "D") {
        c.d = Point(1, 0);
    } else if (dir == "RU") {
        c.d = Point(-1, 1);
    } else if (dir == "RD") {
        c.d = Point(1, 1);
    } else if (dir == "LU") {
        c.d = Point(-1, -1);
    } else if (dir == "LD") {
        c.d = Point(1, -1);
    }

    for (int i = 0; i < 4; i++) {
        int tmp = c.move();
        cout << tmp;
    }
    cout << endl;
}
