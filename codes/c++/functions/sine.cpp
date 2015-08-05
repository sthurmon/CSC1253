#include <iostream>
#include <cmath>
using namespace std;

float factorial (float n) {
  if (n<=1) return 1;
  else      return n*factorial(n-1);
}

float sine(float x) {
  float i, s=0;
  float sign;
  for (i=1; i<50; i+=2) {
    sign = (((int)i/2)%2==0) ? 1 : -1;
    s += sign*(pow(x,i))/factorial(i);
    //cout << s << endl;
  }
  return s;
}

int main() {
  float x;
  cout << "> ";
  cin  >> x;
  cout << "< " << sine(x) << endl;
}
