#include <iostream>
#include <vector>

using namespace std;

int main() {

  int ia[4] = {1, 2, 3, 4};

  vector<int> iv(begin(ia), end(ia));

  for (auto a : iv) {
    cout << a << " ";
  }

  return 0;
}
