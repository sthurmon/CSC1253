#include <iostream>
using namespace std;

int main() {
  char     dna;
  cin  >>  dna;
       if (dna == 'A') cout << 'U';
  else if (dna == 'T') cout << 'A';
  else if (dna == 'C') cout << 'G';
  else if (dna == 'G') cout << 'C';
  return 0;
}
