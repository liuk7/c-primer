#include <vector>

using namespace std;

int main() {

  int a[] = {1, 2, 3, 4, 5};
  int b[] = {6, 7, 8, 9, 10};

  int *abeg = begin(a);
  int *aend = end(a);

  int *bbeg = b;
  int *bend = end(b);

  // comparison part
  while (abeg < aend && bbeg < bend) {
    if (*abeg == *bbeg) {
      if (abeg == aend - 1) {
        cout << "They are equal." << endl;
      }
      abeg++;
      bbeg++;
    } else {
      cout << "Not equal." << endl;
      break;
    }
  }

  return 0;
}
// The comparison part can be replaced as follows:
// if (compare(begin(a), end(a), begin(b), end(b)))
