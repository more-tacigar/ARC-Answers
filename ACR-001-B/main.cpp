#include <iostream>
#include <fstream>
#include <limits>
#include <cmath>

int ARRAY[] = {1, 5, 10, -1, -5, -10};

int search(int from, int to) {
  int min = std::numeric_limits<int>::max(), min_i = 0;
  for (int i = 0; i < 6; i++) {
    int buf = std::abs(to - from - ARRAY[i]);
    if (buf < min) {
      min = buf;
      min_i = i;
    }
  }
  return min_i;
}

int main(int argc, char** argv) {
  std::ifstream ifs(argv[1]);
  int from, to, count = 0;
  ifs >> from >> to;
  while (true) {
    if (from == to) break;
    else count++;
    int index = search(from, to);
    from += ARRAY[index];
  }
  std::cout << count << std::endl;
}
