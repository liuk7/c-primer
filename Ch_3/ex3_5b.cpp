#include <iostream>

using namespace std;

int main() {
  string line, word;

  while (cin >> word) {
    if (line.empty()) {
      line += word;
    } else {
      line += " " + word;
    }
  }

  cout << "The concatenating string is " << line << endl;

  return 0;
}
