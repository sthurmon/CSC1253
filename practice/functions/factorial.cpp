#include <iostream>
using namespace std;

int factorial(int n){
int p=1;
   for(int i=1; i<=n; i++)
      p*=i;
return p;
}

int main(){
int n;
cout << "n> ";
cin >> n;
cout << factorial(n) << endl;
}
