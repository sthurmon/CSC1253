#include <iostream>
using namespace std;
                                                     
int find(string needle, string haystack) {           
  char found;                                        
  for(int i=0; i<haystack.size(); i++) {            
    found = true;                                    
    if (haystack.size()-i<needle.size())             
      return -1;                                     
  for (int j=0; j<needle.size(); j++)              
     if (haystack[i+j] != needle[j])                
        found = false;                               
    if (found) return i;                             
  }                                                  
 return -1;                                         
}                                                    

int main() {
 cout << find("pill", "caterpillar") << endl;
}

