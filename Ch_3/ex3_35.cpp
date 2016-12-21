#include <iostream>
#include <vector>

using namespace std;

int main() {

  int a[] = {1, 2, 3, 4, 5};
  int *beg = begin(a);
  int *end = end(a);

  while (beg < end) {
    *beg = 0;
    beg++;
  }

  for (auto e : a) {
    cout << e << " ";
  }

  return 0;
}
