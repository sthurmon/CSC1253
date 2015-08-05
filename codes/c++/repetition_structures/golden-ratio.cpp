#include <iostream>
using namespace std;

int main() {
  float g = 1;
  int   i;
  for (i=1; i<=100; i++) {
    g = 1.0+1.0/g;
  }
  cout << g << endl;
}
