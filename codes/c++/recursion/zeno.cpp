#include <iostream>
using namespace std;

float zeno(float n) {
  if (n >.99) return 1;
  cout << "< " << n << endl;
  zeno(n+(1-n)/2);
}

int main() {
  zeno(0);
}
