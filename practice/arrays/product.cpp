#include <iostream>
using namespace std;

float prod(float x[], int n){
float p=1;   
   for(int i=0; i<n; i++)
      p*=x[i];
return p;
}

int main(){
float x[]={1.1, 2.2, 3.3};
int n=3;
cout << prod(x, n) << endl;
}
