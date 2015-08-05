#include <iostream>
using namespace std;

void A (int n);
void B (int n);

void B (int n) {
  cout  <<  n;
  A (n+1);
}

void A (int n) {
  cout  <<  n;
  B (n-1);
}

int main() {
  A(1);
}
