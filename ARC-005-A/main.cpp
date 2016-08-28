#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> Ws;
    for (int i = 0; i < N; i++) {
        string tmp;
        cin >> tmp;
        Ws.push_back(tmp);
    }
    int count = 0;
    for (int i = 0; i < N; i++) {
        string tmp = Ws[i];
        if (i == N-1) {
            tmp = tmp.substr(0, tmp.size() - 1);
        }
        if (tmp == "Takahashikun" ||
            tmp == "takahashikun" ||
            tmp == "TAKAHASHIKUN") {
            count++;
        }
    }
    cout << count << endl;
}
