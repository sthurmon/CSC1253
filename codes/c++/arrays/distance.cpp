#include <iostream>
using namespace std;

int distance(int a[], int b[], int n) {
  int i, s=0;
  for (i=0; i<n; i++)
    s += b[i]-a[i];
  return s;
}

int main() {
}
