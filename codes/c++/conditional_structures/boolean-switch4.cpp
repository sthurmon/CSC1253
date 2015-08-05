#include <iostream>
using namespace std;

int main() {
  bool a, b, c, d, e;
  cin  >> a >> b >> c >> d >> e;
  if (a) b = !b;
  if (b) c = !c;
  if (c) d = !d;
  if (d) e = !e;
  if (e) a = !a;
  cout << a << b << c << d << e << endl;
  return 0;
}
