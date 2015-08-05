#include <iostream>
#include <fstream>
#include <cmath>
#include <cfloat>
using namespace std;


int main() {

  ifstream infile;
  infile.open("capitals.dat");          

  float x,    y;                        
  float x_in, y_in;                     
  float d;                              
  float d_min = FLT_MAX;                
  string city,                          
         city_min;                      
 

   cout << "x> ";                        
  cin  >>  x_in;                        
  cout << "y> ";                        
  cin  >>  y_in;                        


                                                       
 while (infile >> city >> x >> y) {                    
   d = sqrt(pow((x_in-x),2) + pow((y_in-y), 2));       
   if (d < d_min) {                                    
     d_min    = d;                                     
     city_min = city;                                  
   }                                                   
  }

  cout << " < " << city_min << endl;   
}
