#include <iostream>
#include <fstream>
using namespace std;

int main(){
ifstream infile;
ofstream outfile;
int n;

infile.open("in.dat");
outfile.open("out.dat");
while(infile >> n) 
   if(n%2!=0) outfile << n << endl;
}
