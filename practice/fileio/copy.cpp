#include <iostream>
#include <fstream>
using namespace std;

int main(){
ifstream infile; 
ofstream outfile;

infile.open("autocopy.cpp");
outfile.open("copy.cpp");
while(infile) 
  outfile.put(infile.get());
}
ÿ