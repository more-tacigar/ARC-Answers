#include <iostream>
using namespace std;

int main() {
    double Height, BMI;
    cin >> Height >> BMI;
    Height /= 100.0;
    cout << Height * Height * BMI << endl;
}
