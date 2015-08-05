#include "typeout.h"
#include <iostream>
#include "unistd.h"
using namespace std;

void typeout(string str, int speed) {
  int i;
  for (i=0; i<str.size(); i++) {
    cout << str[i];
    usleep(10000*speed);
    cout << std::flush;
  }
  return;
}
