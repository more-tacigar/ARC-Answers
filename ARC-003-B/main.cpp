#include <bits/stdc++.h>
using namespace std;

int main() {
    int num_words;
    vector<string> words;
    cin >> num_words;
    for (int i = 0; i < num_words; i++) {
        string buffer;
        cin >> buffer;
        words.push_back(buffer);
    }
    std::sort(words.begin(), words.end(),
              [](string str1, string str2) -> bool {
                  auto itr1 = str1.rbegin();
                  auto itr2 = str2.rbegin();
                  while (true) {
                      if (itr1 == str1.rend()) {
                          return true;
                      }
                      if (itr2 == str2.rend()) {
                          return false;
                      }
                      if (*itr1 == *itr2) {
                          itr1++;
                          itr2++;
                      } else {
                          return *itr1 < *itr2;
                      }
                  }
              });
    for (int i = 0; i < num_words; i++) {
        cout << words[i] << endl;
    }
}
