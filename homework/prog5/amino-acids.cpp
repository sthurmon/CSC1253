#include <iostream>
#include <fstream>
using namespace std;

string amino(string codon) {
	ifstream infile;
	string fcodon, acid;
	infile.open ("codons.dat"); 
	while (infile >> fcodon >> acid)
		if (fcodon==codon) return acid;
}

int main() {
string dna, codon, acid;
cout << "> ";
cin >> dna;
int i;
for (i=0; i<dna.size()/3; i++) {
	codon = dna.substr(i*3, 3);
	//cout << codon << endl;
	acid = amino(codon);
	cout << "< " << codon << ": " << acid << endl;
	if ("STOP"==acid) return 0;
}
}
