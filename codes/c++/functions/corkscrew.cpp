#include <iostream>
using namespace std;

void D(int a, int b, int c) {               // 13) a=1,b=2,c=3
  cout << a << b << c;                      // 14) print 1,2,3
}                                           // 15) return to C

void C(int c, int a, int b) {               // 10) c=1,a=3,b=2
  cout << a;                                // 11) print a=3
  D(c, b, a);                               // 12) c=1,b=2,a=3
  cout << c;                                // 16) print c=1
}                                           // 17) return to B

void B(int c, int a, int b) {               // 7)  c=1,a=2,b=3
  cout << a;                                // 8)  print a=2
  C(c, b, a);                               // 9)  c=1,b=3,a=2
  cout << a;                                // 18) print a=2
}                                           // 19) return to A

void A(int b, int a, int c) {               // 4)  b=1,a=3,c=2
  cout << b;                                // 5)  print b=1
  B(b, c, a);                               // 6)  b=1,c=2,a=3
  cout << a;                                // 20) print a=3
}                                           // 21) return to corkscrew

void corkscrew(int a, int b, int c) {       // 2)  a=1,b=2,c=3
  A(a, c, b);                               // 3)  a=1,c=3,b=2
}                                           // 22) return to main

int main() {                                // 0)  enter main
  corkscrew(1, 2, 3);                       // 1)  1,2,3
  cout << "!" << endl;                      // 23) print !
}                                           // 24) exit main
