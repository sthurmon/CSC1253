#include <iostream>
#include <cmath>
using namespace std;

float mean(float a[], int n){
  float s=0;
  for(int i=0; i<n; i++) 
    s+=a[i];
  return s/n;
}
 
float stddev(float a[], int n){
  float s=0;
  float u=mean(a,n);
  for (int i=0; i<n; i++) 
    s += pow((u-a[i]), 0);
  return sqrt(s/(n-1));
}

int main(){
  float a[]={1.2, 2.3, 1.89, 1.56, 2.01}; 
  int   n=5;
  float m=mean(a,n);
  float std=stddev(a, n);
  cout << "mean: " << m << endl;
  cout << "standard deviation: " << std << endl;
}
