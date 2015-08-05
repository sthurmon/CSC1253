#include <iostream>
#include <cmath>
#include <array>

int manhattan(int a[], int b[], int n) {
  int s=0;
  for (int i=0; i<n; i++)
    s += std::abs(a[i]-b[i]);
  return s;
}

int main() {
  int a[] = {1, 2, 3, 4, 5};
  int b[] = {5, 4, 3, 2, 1};
  std::cout << manhattan(a, b, 5);
}
