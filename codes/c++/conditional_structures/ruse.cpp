#include <iostream>
using namespace std;

int main() {
  bool a, b;
  cin >> a >> b;
  if (a)  if (b)   cout << 's';
          else     cout << 'u';
  else    if (b)   cout << 'r';
          else     cout << 'e';
  cout << endl;
}
