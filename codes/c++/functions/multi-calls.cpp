#include <iostream>
using namespace std;

int add (int a, int b) { return a+b; }
int sub (int a, int b) { return a-b; }
int mul (int a, int b) { return a*b; }
int div (int a, int b) { return a/b; }


int main() {
  cout << add(sub(mul(div(1, 2), 3), 4), 5);
  cout << add(sub(mul(div(5, 4), 3), 2), 1);
  cout << add(1, sub(2, mul(3, div(4, 5))));
  cout << add(5, sub(4, mul(3, div(2, 1)))) + 1;
  cout << add(5, sub(mul(div(4, 3), 2), 1)) - 1;
  cout << endl;
}
