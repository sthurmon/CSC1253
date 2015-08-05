#include <iostream>
using namespace std;

int main() {
  int c, h;
  cin >> c >> h;
       if (h == 2*c-2) cout << "alkyne";
  else if (h == 2*c+2) cout << "alkane";
  else if (h == 2*c  ) cout << "alkene";
  else                 cout << "?";
  return 0;
}
