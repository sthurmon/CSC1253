#include <iostream>
using namespace std;

int main() {
  int i, n;
  cin >> n;

  cout <<       endl << "     ";
  for (i=0; i<5*n; i++) 
    if (i%5==0) cout << 'H';
    else        cout << ' ';

  cout <<       endl << "     ";
  for (i=0; i<5*n; i++) 
    if (i%5==0) cout << '|';
    else        cout << ' ';

  cout <<       endl << "H----";
  for (i=0; i<5*n; i++) 
    if (i%5==0) cout << 'C';
    else        cout << '-';

  cout << 'H'<< endl << "     ";
  for (i=0; i<5*n; i++) 
    if (i%5==0) cout << '|';
    else        cout << ' ';

  cout <<       endl << "     ";
  for (i=0; i<5*n; i++) 
    if (i%5==0) cout << 'H';
    else        cout << ' ';

  cout << endl;
  return 0;
}
