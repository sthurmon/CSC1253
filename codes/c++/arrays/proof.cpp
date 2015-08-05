#include <iostream>
using namespace std;

int addone(int &a) {
  a++;
  return a;
}

int main() {
  int a = 1;
  cout << a << endl;
  cout << addone(a) << endl;
  cout << a << endl;
}
