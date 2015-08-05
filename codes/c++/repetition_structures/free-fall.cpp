#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float t=0, d, x, g=9.81;
  cout << "> ";
  cin  >> d;
  do {
    x = d-.5*g*t*t;
    cout << "< t: " << t;
    cout << "   x:" << x << endl;
    t += .1;
  } while (x>0);
  return 0;
}
