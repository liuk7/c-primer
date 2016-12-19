#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> nums;
  int num;

  while (cin >> num) {
    nums.push_back(num);
  }

  cout << "The sums of adjacent numbers are : " << endl;
  for (decltype(nums.size()) i = 0; i < nums.size(); i += 2) {
    if ((i + 1) >= nums.size()) {
      cout << nums[i] << endl;
      break;
    }
    cout << nums[i] + nums[i + 1] << " ";
  }

  return 0;
}
