#include <iostream>
using namespace std;

float mean(int a[], int n){
float s=0;
float m;

for(int i=0; i<n; i++) s+=a[i];
m=s/n;
cout << m << endl;
}

int main(){
int n=3; int a[]={7, 3, 10};
mean(a, n);
}

