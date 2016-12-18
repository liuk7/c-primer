#include <iostream>

using namespace std;

int main() {
  string line1, line2;

  getline(cin, line1);
  getline(cin, line2);

  if (line1 == line2) {
    cout << "They are equal." << endl;
  } else {
    cout << (line1 > line2 ? line1 : line2) << endl;
  }

  if (line1.size() == line2.size()) {
    cout << "They are of the same length." << endl;
  } else {
    cout << (line1.size() > line2.size() ? line1 : line2) << endl;
  }

  return 0;
}
