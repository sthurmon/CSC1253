#include <iostream>

int argmin(int a[], int n) {
  int i, argmin = 0, min = a[0];
  for (i=1; i<n; i++) 
    if (a[i] < min) {
      min    = a[i];
      argmin = i;
    }
  return argmin;
}

int main() {
  int a[5] = {2, -3, 5, -7, 11};
  std::cout << argmin(a, 5) << std::endl;
}
