#include <iostream>

using namespace std;

int main() {
  string s;
  getline(cin, s);

  int i = 0;
  while (i < s.size()) {
    s[i] = 'X';
    i++;
  }

  cout << s << endl;

  return 0;
}
