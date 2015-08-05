#include <iostream>
using namespace std;

int main() {
	bool a, b, c;
	cout << "> ";
	cin >> a >> b >> c;
	if(a==true) b=!b;
	if(b==true) c=!c;
	if(c==true) a=!a;
	cout << "< ";
	cout << a << " " << b << " " << c << endl;
return 0;
 }
