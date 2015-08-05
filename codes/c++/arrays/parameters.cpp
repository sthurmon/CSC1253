#include <iostream>

void swap(int &a, int &b) {
  int c = a;
      a = b;
      b = c;
}

void print_array(int a[], int n) {
  for (int i=0; i<n; i++)
    std::cout << a[i] << " ";
  std::cout << std::endl;
}

void reverse(int a[], int n) {
  for (int i=0; i<n/2; i++)
    swap(a[i], a[n-i-1]);
}

int main() {
  int a[3] = {1, 2, 3};
  print_array(a, 3);
  reverse(a, 3);
  print_array(a, 3);
}
