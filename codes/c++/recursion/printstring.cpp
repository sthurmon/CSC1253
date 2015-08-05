#include <iostream>
using namespace std;

void print(string s, int i) {
  int n = s.size();
  if (i==n-1) {
    cout << s[i] << endl;
    return;
  }
  cout << "@index i:   " << i    << endl;
  cout << "print s[i]: " << s[i] << endl;
  print(s, i+1);
  return;
}

/*
void print(string s) {
  int n=s.size(), i;
  for (i=0; i<n; i++)
    cout << s[i] << endl;
}
*/


int main() {
  string s = "Hello, world!";
  print(s, 0);
}
