#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<string> Lines;
  string word;

  while (cin >> word) {
    for (auto &a : word) {
      a = toupper(a);
    }
    Lines.push_back(word);
  }

  int count = 0;
  for (auto a : Lines) {
    if (count != 0 && count % 8 == 0) {
      cout << endl;
    }
    cout << a << " ";
    ++count;
  }

  return 0;
}
