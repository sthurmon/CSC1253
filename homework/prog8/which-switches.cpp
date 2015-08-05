 #include <iostream>
 #include <iomanip>
 #include <climits>
 #include <cmath>
 #include <algorithm>
 using namespace std;
 
 #define N 8
 
 
 void print_switches(int n, bool x[]) {               
   cout << setw(5) << n;                              
   for (int i=0; i<N; i++)                            
     cout << setw(5) << ((x[i]==true) ? '*' : ' ');   
   cout << endl;
 }
 
 
 void convert(int n, bool x[]) {                      
 for (int i=N-1; i>=0; i--)                         
     if (n >= pow(2, i)) {                            
         n -= pow(2, i);                              
            x[i] = true;                              
     } else x[i] = false;                             
 }
 
 
 
 bool lightup(bool x[]) {                             
   if (
       (
        x[0]
         ||
        x[1]
       )
         &&
       (
         (
           x[3]
            ||
           x[4]
         )
         ||
         (
           x[5]
            &&
           x[6]
         )
      )
         &&
       (
        x[7]
         ||
        x[8]
       ) 
     )    return true;
     else return false;
 }
 
  int main() {                        
   int n;                            
   bool x[N];                        
   for (n=0; n<256; n++){            
     convert(n, x);                  
     if (lightup(x))                 
       print_switches(n, x);         
   }                                 
}

