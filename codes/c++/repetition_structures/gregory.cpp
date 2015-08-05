#include <iostream>
#include <cmath>
using namespace std;

int main() {
  float pi = 0;
  int k;
  for (k=0; k<=1000; k++) {
    pi += pow(-1, k+1)/(2*k - 1);
  }
  cout << 4*pi;
}
