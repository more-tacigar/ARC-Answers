#include <iostream>
#include <string>
using namespace std;

int main() {
    string buffer;
    cin >> buffer;
    for (int i = 0; i < buffer.size(); i++) {
        char tmp = buffer[i];
        switch (tmp) {
            case 'O': tmp = '0'; break;
            case 'D': tmp = '0'; break;
            case 'I': tmp = '1'; break;
            case 'Z': tmp = '2'; break;
            case 'S': tmp = '5'; break;
            case 'B': tmp = '8'; break;
        }
        buffer[i] = tmp;
    }
    cout << buffer << endl;
}
