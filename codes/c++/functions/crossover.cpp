#include <iostream>
#include <string>
#include "stdlib.h"
#include "unistd.h"
using namespace std;

string child (string father, string mother) {
  int n = mother.size();
  if (n != father.size()) {
    exit(1);
  }
  string c = "";
  srand(time(NULL));
  int loc = rand()%n;
  loc = loc - (loc%3);
  c.append(father.begin(),father.begin()+loc);
  c.append(mother.begin()+loc,mother.end());
  return c; 
}

int main() {
  string father, mother;
  cout << "F> ";
  cin  >> father;
  cout << "M> ";
  cin  >> mother;
  cout << "C< ";
  cout << child(father, mother);
  cout << endl;
}
