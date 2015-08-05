#include <iostream>
using namespace std;

int main() {
 bool a, b;
 cin >> a;
 cin >> b;
 if (a)
	if (b)
		b=0;
	else
		b=1;
cout << a << " " << b << endl;
return 0;
}
