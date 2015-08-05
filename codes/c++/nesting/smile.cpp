#include <iostream>
using namespace std;

int main() {
  int i, j;
  int a, b, c, d, e, f;
  for (i=0; i<24; i++) {
    for (j=0; j<50; j++) {
      a = i-12;  b = j-25;
      c = i-8;   d = j-18;
      e = i-8;   f = j-32;
      if ( 
          (((a*a + .25*b*b) > 100) && 
           ((a*a + .25*b*b) < 150)
	  ) ||
          (((c*c + .25*d*d) > 2) && 
           ((c*c + .25*d*d) < 6)
	  ) ||
          (((e*e + .25*f*f) > 2) && 
           ((e*e + .25*f*f) < 6)
	  ) ||
          (((a*a + .25*b*b) > 20)  && 
           ((a*a + .25*b*b) < 40)  &&
	   (i>14)
	  ) 
	 ) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
}
