#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

struct P {
    double x;
    double y;
};

int main() {
    double max = 0.0;
    int N;
    cin >> N;
    vector<P> Ps;
    for (int i = 0; i < N; i++) {
        double x, y;
        cin >> x >> y;
        P tmp = {x, y};
        Ps.push_back(tmp);
    }
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            double dx = Ps[i].x - Ps[j].x;
            double dy = Ps[i].y - Ps[j].y;
            double tmp = dx * dx + dy * dy;
            if (max < tmp) {
                max = tmp;
            }
        }
    }
    cout << sqrt(max) << endl;
}
