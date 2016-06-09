#include <iostream>
#include <fstream>
#include <limits>
int main(int argc, char** argv) {
  std::ifstream ifs(argv[1]);
  int N;
  ifs >> N;
  ifs.get(); // skip '\n'
  int ans[4];
  for (int i = 0; i < N; i++) {
    int buf = ifs.get() - '0';
    ans[buf - 1]++;
  }
  int max = std::numeric_limits<int>::min();
  int min = std::numeric_limits<int>::max();
  for (int i = 0; i < 4; i++) {
    if (max < ans[i]) max = ans[i];
    if (min > ans[i]) min = ans[i];
  }
  std::cout << max << " " << min << std::endl;
}
