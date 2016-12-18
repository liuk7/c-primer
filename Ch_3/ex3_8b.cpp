#include <iostream>

using namespace std;

int main() {
  string s;
  getline(cin, s);

  for (decltype(s.size()) i = 0; i < s.size(); ++i) {
    s[i] = 'X';
  }

  cout << s << endl;

  return 0;
}

// I prefer the "range for", because it is easier and simpler.
