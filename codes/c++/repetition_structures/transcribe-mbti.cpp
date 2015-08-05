#include <iostream>
using namespace std;

int main() {
  bool invalid = false;

  string mbti;
  cout << "> ";
  cin  >> mbti;
  cout << "< ";

       if (mbti[0] == 'I') mbti[0] =  'E';
  else if (mbti[0] == 'E') mbti[0] =  'I';
  else                     invalid = true;

       if (mbti[1] == 'N') mbti[1] =  'S';
  else if (mbti[1] == 'S') mbti[1] =  'N';
  else                     invalid = true;

       if (mbti[2] == 'T') mbti[2] =  'F';
  else if (mbti[2] == 'F') mbti[2] =  'T';
  else                     invalid = true;

       if (mbti[3] == 'J') mbti[3] =  'P';
  else if (mbti[3] == 'P') mbti[3] =  'J';
  else                     invalid = true;

  if (invalid) {
    cout << "Invalid input" << endl;
    return 0;
  }

  cout << mbti << endl;
  return 0;
}
