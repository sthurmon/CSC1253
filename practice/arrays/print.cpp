#include <iostream>
using namespace std;

void print(int x[], int n){
   for(int i=0; i<n; i++)
   cout << x[i] << " ";
return;
}	

int main(){
int x[]={1,2,3,4,5,6,7}; 
print(x, 7);
cout << endl;
}
