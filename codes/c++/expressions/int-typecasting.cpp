#include <iostream>
using namespace std;

int main() {
  cout << (int) ('y'-'w')
       << (int) ('e'-'e')
       << (int) ('a'-'a'+1)
       << (int) ('r'-'r'+'e'-"at"[0]);
  cout << '!';
  cout << endl;
}
