#include <iostream>

using namespace std;

int main() {
  string line, word;

  while (cin >> word) {
    line += word;
  }

  cout << "The concatenating string is " << line << endl;

  return 0;
}
