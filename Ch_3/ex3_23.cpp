#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> nums = {1, 2, 5, 32, 17, 21, 9, 11, 36, 25};

  for (auto it = nums.begin(); it != nums.end(); ++it) {
    *it = (*it) * 2;
    cout << *it << " ";
  }

  return 0;
}
