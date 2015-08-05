#include <iostream>
#include <cmath>
using namespace std;

int main() {

  int n; 
  cout << "> ";
  cin  >> n;

  /***************************************************************************
   * The following code gets the base-2 logarithm of n.
   *
   * Instead of this, create function:
   *
   *     int log2(int n) {
   *       ...
   *     }
   */
  // accept n
  int i=0, log2, m=n;
  while (m > 1) {
    m /= 2;
    i += 1;
  }
  log2 = i;
  // return log2
  /* *************************************************************************/

  /***************************************************************************
   * The following code translates n into binary.
   *
   * Instead of this, create function:
   *
   *    string binary(int n) {
   *      ...
   *    }
   */
  // accept n
  int pow2;
  string binary;
  for (int i=log2; i>=0; i--) {
    pow2 = (int)pow(2, i);
    if (pow2 > n) 
      binary += "0";
    else {
      n = n % pow2;
      binary += "1";
    }
  }
  // return binary
  /* *************************************************************************/
  cout << "< " << binary << endl;

}
