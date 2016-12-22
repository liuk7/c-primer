#include <iostream>

using namespace std;

int main() {

  int ia[10] = {10, 22, 3, 9, 21, 36, 17, 5, 30, 26};

  // version 1
  for (auto a : ia) {
    cout << a << " ";
  }
  cout << endl;

  // version 2
  for (size_t i = 0; i < 10; i++) {
    cout << ia[i] << " ";
  }
  cout << endl;

  // version 3
  using int_arr = int;
  for (int_arr *i = ia; i != ia + 10; i++) {
    cout << *i << " ";
  }
  cout << endl;

  return 0;
}
