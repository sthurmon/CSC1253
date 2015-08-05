#include <iostream>
#include "stdlib.h"
using namespace std;

int main() {
  float x, y;
  int i, n=1000, inside=0;
  srand(time(NULL));
  for (i=0; i<n; i++) {
    x = (rand()%101)/100.0;
    y = (rand()%101)/100.0;
    if (x*x + y*y < 1)
      inside++;
  }
  cout << 4*inside/1000.0 << endl;
}
