#include <iostream>
using namespace std;

int main() {
  string dna;
  cin >> dna;
  int i;
  for (i=0; i<dna.size(); i++) {
         if (dna[i] == 'A')  cout << 'U';
    else if (dna[i] == 'C')  cout << 'G';
    else if (dna[i] == 'G')  cout << 'C';
    else if (dna[i] == 'T')  cout << 'A';
  }
  return 0;
}
