#include <iostream>
#include <fstream>
using namespace std;

int main(){
ofstream outfile;

outfile.open("hello-world.cpp");
outfile << #include << <iostream> << endl; 
outfile << using << namespace << std; << endl;
outfile << int <<  main(){cout<<"Hello,World!; << endl;
}
