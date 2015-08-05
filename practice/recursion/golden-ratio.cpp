#include <iostream>
using namespace std;

double g(int n){
double gr;
for(int i=0; i<=n; i++)
gr=1+(1/gr);
return gr;
}
int main(){
double gr=g(10);
cout << gr << endl;
}
