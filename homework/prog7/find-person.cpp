 #include <iostream>                 
 #include <fstream>                  
 #include <cstdlib>                  
 #include <cmath>                    
 using namespace std;
 
 #define N 68                        
 #define M 10                        
 
 int argmin(int x[]) {               
     int i;             
     int min = x[0], argmin=0;       
     for (i=0; i<N; i++)             
         if (min > x[i]) {           
             min = x[i];             
             argmin = i;             
         }
     return argmin;                  
 }                                   
 
 int manhattan(int x[], int y[]) {   
     int i, s = 0;                   
     for (i=0; i<M; i++)             
         s += abs(x[i]-y[i]);        
     return s;                       
 }                                   
 
 
 int main() {
 
     int d[N];                       
     int p[N][M];                    
     int i, j;                       
     string initial;                 
 
     ifstream infile;                       
     infile.open("neo-ffi.dat"); 
 
                                         
     if (infile) {                       
             for (i=0; i<N; i++) {       
                 infile >> initial;      
                 for (j=0; j<10; j++)    
                     infile >> p[i][j];  
             }
     } else {                            
         cout << "File could not be opened!";
         exit(1);
     }                                   
 
     
     int  me[M] = {2,4,3,3,4,4,1,3,5,3};  
     int you[M];                          
 
                                     
     for (i=0; i<N; i++) {           
         for (j=0; j<M; j++)         
             you[j] = p[i][j];       
         d[i] = manhattan(me, you);  
     }                               
 
     int similar = argmin(d);          
     for (j=0; j<M; j++)               
       cout << p[similar][j]<< " ";   
     cout << endl;                     
 
     return 0;
 }
