#include <iostream> 
using namespace std;

int main() {
bool a, b, c;
cout << "> " << endl;
cin >> a >> b >> c;
if (a) b= !b;
if (b) c= !c;
if (c) a= !a;
cout << "< ";
cout << a << " " << b << " " << c << endl;
return 0;
}
