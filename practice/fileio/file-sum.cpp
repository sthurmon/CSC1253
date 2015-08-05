#include <iostream>
#include <fstream>
using namespace std;

int main(){
int s=0;
int x;
ifstream infile;

infile.open("nums.dat");
while(infile >> x)
s+=x;
cout << s << endl;
}

