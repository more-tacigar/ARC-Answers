#include <bits/stdc++.h>
using namespace std;

int main() {
  int number = 0;
  cin >> number;

  int sum = 0;
  for (int i = 1; i <= number; i++) {
    sum += i;
  }
  if (sum == 1) {
    cout << "BOWWOW" << endl;
    return 0;
  }
  
  for (int i = 2; i <= sum / 2; i++) {
    if (sum % i == 0) {
      cout << "BOWWOW" << endl;
      return 0;
    }
  }
  cout << "WANWAN" << endl;
}
