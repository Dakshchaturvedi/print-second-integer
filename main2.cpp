#include <iostream>

using namespace std;

int main() {
  int list[] = {1, 2, 3, 4, 5};
  int size = sizeof(list) / sizeof(list[0]);
  if (size == 0) {
    cout << "The list is empty." << endl;
    return 0;
  }
  if (size == 1) {
    cout << "The list has only one element." << endl;
    return 0;
  }
  cout << "The second element in the list is " << list[1] << endl;

  return 0;
}