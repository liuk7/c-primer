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
  for (auto it = nums.begin(); it != nums.end();) {
    if (it + 1 == nums.end()) {
      cout << *it << endl;
      break;
    }
    cout << *it + *(it + 1) << " ";
    ++it;
    ++it;
  }

  return 0;
}
