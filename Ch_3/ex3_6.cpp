#include <iostream>

using namespace std;

int main() {
  string s;
  getline(cin, s);

  for (auto &a : s) {
    a = 'X';
  }
  cout << s << endl;

  return 0;
}
