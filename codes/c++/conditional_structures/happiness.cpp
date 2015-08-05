#include <iostream>
using namespace std;

int main() {
  int happiness;
  cout << "How happy are you?\n> ";
  cin  >>  happiness;
  cout << "< ";
       if (happiness > 4) cout << ":))";
  else if (happiness > 3) cout << ":)";
  else if (happiness < 2) cout << ":((";
  else if (happiness < 3) cout << ":(";
  else                    cout << ":|";
  return 0;
}
