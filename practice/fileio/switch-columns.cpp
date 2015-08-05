#include <iostream>
#include <fstream>
using namespace std;

int main(){
int a, b;
ifstream infile;
ofstream outfile;

infile.open("nums_in.dat");
outfile.open("nums_out.dat");
while(infile >> a >> b)
outfile << b << " " << a << endl;
}
