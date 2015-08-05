#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  int i, sum;
  cout << "> ";
  cin  >> a >> b >> c;
  cout << "< ";
  for (i=a; i<b; i+=c) {
    cout << i << " ";
    sum  += i;
  }
  cout << endl << "< " << sum << endl;
  return 0;
}
