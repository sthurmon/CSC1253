#include <iostream>
using namespace std;

int main() {
  int i, n=9, s=0;
  int a[n];
  cout << "> ";
  for (i=0; i<n; i++)  {
    cin >> a[i];
    s += a[i];
  }
  cout << "< " << s << endl;
}
