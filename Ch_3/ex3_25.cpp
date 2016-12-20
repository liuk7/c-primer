#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<unsigned> scores(11, 0);
  unsigned grade;
  auto it = scores.begin();

  while (cin >> grade) {
    if (grade <= 100) {
      (*(it + grade / 10))++;
    }
  }

  for (it = scores.begin(); it != scores.end(); it++) {
    cout << *it << " ";
  }

  return 0;
}
// 42 65 95 100 39 67 95 76 88 76 83 92 76 93
