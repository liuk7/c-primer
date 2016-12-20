#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v1;
  vector<int> v2(10);
  vector<int> v3(10, 42);
  vector<int> v4{10};
  vector<int> v5{10, 42};
  vector<string> v6{10};
  vector<string> v7{10, "hi"};

  cout << "The size of v1 is : " << v1.size() << endl;
  cout << "The size of v2 is : " << v2.size() << endl;
  cout << "The size of v3 is : " << v3.size() << endl;
  cout << "The size of v4 is : " << v4.size() << endl;
  cout << "The size of v5 is : " << v5.size() << endl;
  cout << "The size of v6 is : " << v6.size() << endl;
  cout << "The size of v7 is : " << v7.size() << endl;
  cout << endl;

  cout << "v1 is empty." << endl;

  cout << "The content of v2 is : " << endl;
  for (auto it = v2.cbegin(); it != v2.cend() && !it->empty(); ++it) {
    cout << *it << " ";
  }
  cout << endl;

  cout << "The content of v3 is : " << endl;
  for (auto it = v3.cbegin(); it != v3.cend() && !it->empty(); ++it) {
    cout << *it << " ";
  }
  cout << endl;

  cout << "The content of v4 is : " << endl;
  for (auto it = v4.cbegin(); it != v4.cend() && !it->empty(); ++it) {
    cout << *it << " ";
  }
  cout << endl;

  cout << "The content of v5 is : " << endl;
  for (auto it = v5.cbegin(); it != v5.cend() && !it->empty(); ++it) {
    cout << *it << " ";
  }
  cout << endl;

  cout << "The content of v6 is : " << endl;
  for (auto it = v6.cbegin(); it != v6.cend() && !it->empty(); ++it) {
    cout << *it << " ";
  }
  cout << endl;

  cout << "The content of v7 is : " << endl;
  for (auto it = v7.cbegin(); it != v7.cend() && !it->empty(); ++it) {
    cout << *it << " ";
  }
  cout << endl;

  return 0;
}
