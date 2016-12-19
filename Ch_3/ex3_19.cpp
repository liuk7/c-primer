#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> v1 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
  vector<int> v2(10, 42);
  vector<int> v3;
  for (int i = 0; i != 10; ++i) {
    v3.push_back(42);
  }

  return 0;
}

// The preferred way to initialize is the third one, next is the second. Because
// when the number is very large, we can initialize our vector easily by these
// two way.
