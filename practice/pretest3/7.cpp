#include <iostream>
#include <fstream>
using namespace std;

int main(){
ifstream infile;

infile.open("kittens.dat");
while(infile >> kitten) cout << kitten << endl;
}
