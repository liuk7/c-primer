#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<string> lines;
  string line;

  while (getline(cin, line)) {
    lines.push_back(line);
  }

  for (auto a : lines) {
    cout << a;
  }

  return 0;
}
