#include <iostream>
#include <cmath>
#include "unistd.h"
using namespace std;

float Ti, Te, k;

float T(float t) {
  return Ti + (Te - Ti)*exp(-k*t);
}

int main() {
  cout << "Ti> ";
  cin  >> Ti;
  cout << "Te> ";
  cin  >> Te;
  cout << " k> ";
  cin  >> k;
  float t;
  for (t=0; t<=10; t++) {
    cout << "  < " << T(t) << endl << std::flush;
    sleep(1);
  }
}
