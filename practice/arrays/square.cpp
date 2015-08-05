#include <iostream>
using namespace std;

void square(int x[], int n){
   for(int i=0; i<n; i++)
      x[i]=x[i]*x[i];
return;
}

int main(){
int x[]={1,2,3,4,5};
int n=5;
square(x, n);
for(int i=0; i<n; i++)
   cout << x[i] << " ";
   cout << endl;
}
