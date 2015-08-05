#include <iostream>
#include <iomanip>
#include <array>
//using namespace std;

void print_array(int a[], int n) {
  for (int i=0; i<n; i++)
    std::cout << std::setw(4) << a[i] << " ";
  std::cout << std::endl;
}

int add(int a[], int b[], int c[], int n) {
  for (int i=0; i<n; i++)
    c[i] = a[i]+b[i];
}

int main() {
  int a[] = { 1, 2,  3, 4};
  int b[] = {-4, 3, -2, 1};
  int c[4];
  print_array(a, 4);
  print_array(b, 4);
  add(a, b, c, 4); 
  print_array(c, 4);
}
