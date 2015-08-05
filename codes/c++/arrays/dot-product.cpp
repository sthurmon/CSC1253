#include <iostream>
#include <iomanip>
#include <array>
//using namespace std;

void print_array(int a[], int n) {
  for (int i=0; i<n; i++)
    std::cout << std::setw(4) << a[i] << " ";
  std::cout << std::endl;
}

int dot(int a[], int b[], int n) {
  int s=0;
  for (int i=0; i<n; i++)
    s += a[i]*b[i];
  return s;
}

int main() {
  int a[] = { 1, 2,  3, 4};
  int b[] = {-4, 3, -2, 1};
  print_array(a, 4);
  print_array(b, 4);
  std::cout << std::setw(4) << dot(a, b, 4) << std::endl;
}
