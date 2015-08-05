#include <iostream>
using namespace std;

int main() {
  bool a=false, b=true;
  if (a) b=b-1;
  else   a++;  if (b) b=b-1;
               else   a++;    if (a) b++;
                              else   a=a-1;  if (b) b++;
                                             else   a=a-1;
  cout << a << " " << b << endl;
  return 0;
}
