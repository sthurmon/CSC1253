#include <iostream>
using namespace std;

int main() {
  string cmd;
  string word;
  int i;
  do {
    cout << "> ";
    cin  >> cmd;
    if (cmd == "hello") {
      cout << "< ";
      cout << "Hello, world!";
    } else if (cmd == "reverse") {
      cout << " > "; 
      cin  >> word;
      cout << " < "; 
      for (i=word.size(); i>=0; i--)
        cout << word[i];
    } else if (cmd == "quit") {
      cout << "< ";
      cout << "Goodbye!";
      cout << endl;
      break;
    } else {
      cout << "< ";
      cout << "Command not recognized.";
    }
    cout << endl << endl;
  } while (cmd != "quit");
  return 0;
}
