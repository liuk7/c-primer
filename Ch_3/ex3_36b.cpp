#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> iv1 = {1, 2, 3, 4, 5};
  vector<int> iv2 = {6, 7, 8, 9, 10};

  if (iv1 == iv2) {
    cout << "They are equal." << endl;
  } else {
    cout << "Not equal." << endl;
  }

  return 0;
}
