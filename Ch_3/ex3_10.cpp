#include <iostream>

using namespace std;

int main() {
  string s;
  getline(cin, s);

  for (auto &a : s) {
    if (!ispunct(a))
      cout << a;
  }

  return 0;
}
