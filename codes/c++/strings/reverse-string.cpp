#include <iostream>
using namespace std;

int main() {
  char tmp;
  string s;
  cout << "> ";
  cin  >> s;
  cout << "< ";
  int i, n=s.size();
  for (i=0; i<n/2; i++) {
    tmp      = s[i];
    s[i]     = s[n-i-1];
    s[n-i-1] = tmp;
  }
  cout << s << endl;
  return 0;
}
