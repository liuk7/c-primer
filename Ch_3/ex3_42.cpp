#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> iv = {1, 2, 3, 4};

  int ia[iv.size()];

  for (int i = 0; i < iv.size(); i++) {
    ia[i] = iv[i];
  }

  for (auto a : ia) {
    cout << a << " ";
  }

  return 0;
}
