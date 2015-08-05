#include <iostream>
using namespace std;

void add(int x[], int y[], int z[], int n){
for(int i=0; i<n; i++)
   z[i]=x[i]+y[i];
}

int main(){
int x[]={1,1,1,1,1};
int y[]={2,2,2,2,2};
int n=5;
int z[n];
add(x, y, z, n);
for(int i=0; i<n; i++)
cout << z[i] << " ";
cout << endl;
}
