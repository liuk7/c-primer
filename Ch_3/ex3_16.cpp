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
  for (auto a : v2) {
    cout << a << " ";
  }
  cout << endl;

  cout << "The content of v3 is : " << endl;
  for (auto a : v3) {
    cout << a << " ";
  }
  cout << endl;

  cout << "The content of v4 is : " << endl;
  for (auto a : v4) {
    cout << a << " ";
  }
  cout << endl;

  cout << "The content of v5 is : " << endl;
  for (auto a : v5) {
    cout << a << " ";
  }
  cout << endl;

  cout << "The content of v6 is : " << endl;
  for (auto a : v6) {
    cout << a << " ";
  }
  cout << endl;

  cout << "The content of v7 is : " << endl;
  for (auto a : v7) {
    cout << a << " ";
  }
  cout << endl;

  return 0;
}
