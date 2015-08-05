#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  for (int i=s.size()-1;   // Begin at the end,
           i>=0;           // End at the beginning,
	   i--)            // And step in steps of one:
	   cout <<         //   Print each thing
	   s[i];           //   Inside the string
  return 0;                // And thus the deed is done.
}
