#include <iostream>
using namespace std;

bool is_prime(int n) {
  for (int i=2; i<n; i++)
    if (n%i == 0)
      return false;
  return true;
}

void factor(int n){
  for(int i=2; i<=n; i++)
    if(n%i==0 && is_prime(i))
      cout << i << endl;
}

int main() {
  factor(10);
}
