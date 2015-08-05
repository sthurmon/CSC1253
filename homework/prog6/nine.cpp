#include <iostream>
using namespace std;

int main() {
int n=9, s=0;
int a[n];
cout << "> ";
for(int i=0; i<n; i++) cin >> a[i];
for(i=0; i<n; i++) s+=a[i];
cout << "< " << s << endl;
}
