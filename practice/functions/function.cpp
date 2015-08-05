#include <iostream>
#include <cmath>
using namespace std;

float f(int x, int y){
float v=(x*(pow(10, y)));
return v;
}

int main(){
int v=f(10,4);
cout << v << endl;
}

