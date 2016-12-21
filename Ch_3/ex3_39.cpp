#include <iostream>
#include <vector>

using namespace std;

int main() {

  // string comparison
  string s1 = "Hello";
  string s2 = "World";

  if (s1 == s2) {
    cout << "The two strings are equal." << endl;
  } else {
    cout << "The two strings are not equal." << endl;
  }

  // C-style string comparison
  const char *ca1 = "Hello";
  const char *ca2 = "World";

  auto res = strcmp(ca1, ca2);
  if (res == 0) {
    cout << "They are same." << endl;
  } else {
    cout << "They are not same." << endl;
  }

  return 0;
}
