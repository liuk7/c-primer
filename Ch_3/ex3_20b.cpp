#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> nums;
  int num;

  while (cin >> num) {
    nums.push_back(num);
  }

  cout << "The sums are : " << endl;
  decltype(nums.size()) j = nums.size() - 1;
  for (decltype(nums.size()) i = 0; i <= j; i++, j--) {
    if (i == j) {
      cout << nums[i] << endl;
      break;
    }
    cout << nums[i] + nums[j] << " ";
  }

  return 0;
}
