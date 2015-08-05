#include <iostream>
using namespace std;

int factorial (int n) {
  if (n==1) { 
    cout << "Base case: return 1." << endl;
    return 1;
  }
  cout << "Recursive case: return ";
  cout << n << "*" << "factorial(" << n-1 << ")" << endl;
  return n*factorial(n-1);
}

int main() {
  cout << factorial(4) << endl;
}
