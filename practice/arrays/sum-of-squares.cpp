#include <iostream>
using namespace std;

int sum_squares(int x[], int n){
   int s=0;
   for(int i=0; i<n; i++)
      x[i]=x[i]*x[i];
   for(int j=0; j<n; j++)
      s+=x[j];
return s;
}

int main(){
int x[]={1,2,3,4,5};
cout << sum_squares(x, 5) << endl;
}

