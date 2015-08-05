#include <iostream>
using namespace std;

int main() {
int i, a, b, c, S=0;
cout << "> ";
cin >> a >> b >> c;
cout << "<";
	for (i=a; i<(b-3); i+=c) {
	S += i;
	cout << " " << i << " ";
	}	
cout << "" << endl;
cout << "< " << S << endl;
return 0;
}
