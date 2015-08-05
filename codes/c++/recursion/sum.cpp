#include <iostream>
using namespace std;

int sum (int n) {
  if (n == 1) return 1;
  return n+sum(n-1);
}

int main() {
  cout << sum(4) << endl;
}

/*
int sum(int n) {
  int i, s=0;
  for (i=1; i<=n; i++) 
      s += i;
  return s;
}
*/

