#include <iostream>
using namespace std;

void hello() {
	cout << "< Hello, world!" << endl;
	cout << "" << endl;
        }
void reverse() {
	char tmp;
	string s;
	cout << "> ";	
	cin  >> s;
	cout << "< ";
	int i, n=s.size();
	for(i=0; i<n/2; i++) {
		tmp = s[i];
		s[i]= s[n-i-1];
		s[n-i-1]= tmp;
	}
	cout << s << endl;
	cout << "" <<endl; 
        }
void quit() {
	cout << "< Goodbye!" << endl;
}
int main() {

	string a;
	cout << "> ";
	cin >> a;

	if(a == "hello" ) {hello(); main();}
	else if (a == "quit") {quit();}
	else if (a == "reverse") {reverse(); main();}
}
