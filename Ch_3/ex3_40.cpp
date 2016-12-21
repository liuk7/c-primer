#include <iostream>
#include <vector>

using namespace std;

int main() {

  char ca1[] = "hello";
  char ca2[] = "world";

  auto len = strlen(ca1) + strlen(ca2) + strlen(" ");
  char ca3[len];

  strcpy(ca3, ca1);
  strcat(ca3, " ");
  strcat(ca3, ca2);

  cout << ca3 << endl;

  return 0;
}
