#include <iostream>
#include <fstream>
using namespace std;

int main(){
  ifstream infile("autocopy.cpp"); 
  ofstream outfile("copy.cpp");
  while(infile) 
    outfile.put(infile.get());
}
