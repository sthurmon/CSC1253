#include <iostream>
using namespace std;

int main() {
float x;
float g = 9.81;
float d, t=0;
cout << ">" ;
cin >> d;
while (x > 0) {
x = (d-.5*g*t*t);
cout << "< " << "t: " << t << "; " << "x: " << x << endl;
t+=.1;
}
return 0;
}
