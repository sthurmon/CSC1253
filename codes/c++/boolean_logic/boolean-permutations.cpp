#include <iostream>
using namespace std;

int main() {
  cout << (true  || !true);
  cout << (true  && !true);
  cout << (false || !false);
  cout << (false && !false);
  return 0;
}
