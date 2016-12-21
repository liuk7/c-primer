#include <iostream>
#include <vector>

using namespace std;

int main() {

  // array
  int nums[10];
  for (int i = 0; i < 10; i++) {
    nums[i] = i;
  }

  int nums1[10];
  for (int i = 0; i < 10; i++) {
    nums1[i] = nums[i];
  }

  // vector
  vector<int> iv;
  for (decltype(iv.size()) i = 0; i < 10; i++) {
    iv.push_back(i);
  }

  vector<int> iv1(iv);

  for (auto a : iv1) {
    cout << a << " ";
  }

  return 0;
}
