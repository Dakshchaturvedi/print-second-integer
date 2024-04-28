#include <iostream>

using namespace std;

int main() {
  int list[] = {4, 6, 19, 12, 12};
  int size = sizeof(list) / sizeof(list[0]);
  if (size == 0) {
    cout << "The list is empty." << endl;
    return 0;
  }
  if (size == 1) {
    cout << "in this only one element:" << endl;
    return 0;
  }
  cout << "the second integer in List is: " << list[1] << endl;

  return 0;
}
