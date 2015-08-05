//wrote as much of code as I could from class which served as my guideline for this code, file is in home directory and named file.cpp,
#include <iostream>
#include <fstream>
#include "unistd.h" // Mohammed helped me figure out that unistd.h went between the quotes!(Then we realized the answer was right in front of us on 
//the important functions document you uploaded -__-
#include "color.h"
using namespace std;
using namespace color;

int main () {
	ifstream infile;
	infile.open ("sentence.txt");
	string sentence;
	getline (infile, sentence);

int i, j=0;
while(true) {
j++;
for (i=0; i<sentence.size(); i++) {
     int k = (i+j)%5;
	       if (k==0) cout << red;
	  else if (k==1) cout << yellow;
	  else if (k==2) cout << green;
	  else if (k==3) cout << blue;
	     else        cout << magenta;
	  cout << sentence[i] << flush;
	}
        usleep(50000);
	cout << string(80,'\n');
       }
}



