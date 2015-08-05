#include <iostream>

void value_swap(int a, int b) {
  int c = a;
      a = b;
      b = c;
}

void reference_swap(int &a, int &b) {
  int c = a;
      a = b;
      b = c;
}

int main() {
  int a=1, b=2;
  value_swap(a, b);
  std::cout << a << " " << b << std::endl;

  int c=1, d=2;
  reference_swap(c, d);
  std::cout << c << " " << d << std::endl;
}
