 #include <iostream>
 #include <cmath>
 using namespace std;
 
 float f(float x) {
   return (sqrt(x)-x)*sin(x);
 }
 
 float xmax(float a, float b, float e) {              
   float x, max = f(a), xmax = a;                     
   for (x=a+e; x<b-e; x+=e)                           
     if ( f(x-e) < f(x)   &&                          
 	 f(x)   > f(x+e) )                           
        return x;
 }
 
 int main() {
   float a, b, e;
   cout << "a> "; cin  >>  a;
   cout << "b> "; cin  >>  b;
   cout << "e> "; cin  >>  e;
   cout << " < " << xmax(a, b, e) << endl;
 }
