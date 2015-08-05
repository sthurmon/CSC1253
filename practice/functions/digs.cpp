#include <iostream>
using namespace std;

int digs(int n){
int d=0;
while(n>0){
    n/=10;
    d++;
}
return d;
}

int main(){
int n=123456;
int c=digs(n);
cout << c << endl;
}
