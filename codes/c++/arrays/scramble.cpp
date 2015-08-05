#include <iostream>

void scramble(int a[], int n) {
  for (int i=0; i<n; i++)
    std::swap(a[i], a[(i+2)%5]);
}

int main() {
  int a[5] = {2, 1, 4, 5, 3};
  scramble(a, 5);
  for (int i=0; i<5; i++)
    std::cout << a[i];
}
