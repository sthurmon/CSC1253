#include <iostream>

int main() {
  // Declare/initialize without size
  int a[]  = {1, 2, 3};

  // Print without loop: prints memory address
  /*
  std::cout << a;
  std::cout << std::endl;
  */

  // Print with loop: prints array values
  for (int i=0; i<3; i++)
    std::cout << a[i] << " ";
}
