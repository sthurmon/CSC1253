#include <iostream>
using namespace std;

void print(int a[], int n){
  for(int i=0; i<n; i++) 
    cout << a[i] << " ";
  cout << endl;
}

void decompose(int a[], int n){
  for(int i=n; i>0; i--) 
    a[i] -= a[i-1];
}

void accumulate(int a[], int n){
  for(int i=0; i<n; i++) 
    a[i] += a[i-1];
}

int main(){
int n=9; int a[]={1,2,1,2,3,1,2,1,2}; 
print(a,n);
accumulate(a,n);
print(a,n);
decompose(a,n);
print(a,n);
}
