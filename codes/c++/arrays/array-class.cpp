#include <iostream>
#include <array>

int main() {
  // Array declaration
  std::array <int,3> a = {1, 2, 3};

  // Can use size() function with array object
  for (int i=0; i<a.size(); i++)
    std::cout << a[i] << " "; 

  // Can use iterator notation
  for (int el : a) 
    std::cout << el << " "; 
}
