#include <iostream>
using namespace std;

int search(int x[], int n, int k){
for(i=0; i<n; i++)
if(x[i]==k)return i;
return -1;
}
