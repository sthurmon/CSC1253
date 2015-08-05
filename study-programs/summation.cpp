#include <iostream>
using namespace std;

int main() {
int i, n, S=0;
cout << "Enter n: "; 
cin >> n;
if (n < 1) return 1;
for (i=1; i<=n; i++)
S += i; 
cout << "The sume is " << S << "." << endl;
return 0;
}
