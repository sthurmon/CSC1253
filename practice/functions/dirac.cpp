#include <iostream>
using namespace std;

int dirac(float x){
int delta;
if(x==0) delta=1;
else delta=0;
return delta;
}

int main(){
float x;
cout << "x> ";
cin >> x;
cout << dirac(x) << endl;
}
