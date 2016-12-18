// My answer is: Nothing would be changed.

#include <iostream>
using namespace std;

int main() {
  string s;
  getline(cin, s);

  for (char a : s) {
    a = 'X';
  }

  cout << s << endl;

  return 0;
}

// input is: liukuan
// output is: liukuan
