#include <iostream>

int min(int a[], int n) {
  int i,  min = a[0];
  for (i=1; i<n; i++) 
    if (a[i] < min)
      min    = a[i];
  return min;
}

int main() {
  int a[5] = {2, -3, 5, -7, 11};
  std::cout << min(a, 5) << std::endl;
}
