#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<string> Lines;
  string word;

  while (cin >> word) {
    for (auto a = word.begin(); a != word.end() && !a->empty(); ++a) {
      *a = toupper(*a);
    }
    Lines.push_back(word);
  }

  int count = 0;
  for (auto a = Lines.cbegin(); a != Lines.cend() && !a->empty(); ++a) {
    if (count != 0 && count % 8 == 0) {
      cout << endl;
    }
    cout << *a << " ";
    ++count;
  }

  return 0;
}
