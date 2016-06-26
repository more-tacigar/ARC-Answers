#include <bits/stdc++.h>
using namespace std;

int main() {
    int num_questions;
    cin >> num_questions;
    vector<int> answers(5); // ignore [0]
    for (int i = 0; i < num_questions; i++) {
        char buffer;
        cin >> buffer;
        int index = buffer - '0';
        answers[index]++;
    }
    cout << *max_element(answers.begin() + 1, answers.end()) << ' '
         << *min_element(answers.begin() + 1, answers.end()) << endl;
}
