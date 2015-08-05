#include <iostream>
using namespace std;

int main() {
  int i, j, n;
  cin >> n;
  for (j=1; j<=5; j++) {
      for (i=0; i<5*n+1; i++) 
               if (i==0 || i==5*n)      if (j==3)             cout << 'H';
	                           else                       cout << ' ';
          else if (i<5)                 if (j==3)             cout << '-';
	                           else                       cout << ' ';
          else if (i%5==0)              if (j==1 || j==5)     cout << 'H';
	                           else if (j==2 || j==4)     cout << '|';
	                           else                       cout << 'C';
	  else                     if (j==3)                  cout << '-';
	                           else                       cout << ' ';
      cout << endl;
  }
  return 0;
}
