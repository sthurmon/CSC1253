#include <iostream>
using namespace std;

int add(int a, int b);

int main() {
  cout << add(2, 3) << endl;
}

int add (int a, int b) {
  return a+b;
}
