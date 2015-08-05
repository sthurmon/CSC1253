#include <iostream>
#include <fstream>
using namespace std;

int main() {
  String kitten;
  ifstream infile;
  infile.open("kittens.dat");
  //while (getline(infile, kitten)) 
  while (infile >> kitten)
      cout << kitten;
}

