#include "sound.h"
#include <iostream>
using namespace std;
using namespace snd;

int main() {
  int i;
  for (i=0; i<30; i++) {
    play (  0.0, .12);
    if (i%2!=0) play (150.0, .01);
    else        play (0.0,   .01);
    play (  0.0, .06);
    if (i%3!=0) play (150.0, .02);
    else        play (0.0,   .02);
    play (  0.0, .06);
    if (i%5==0) play (800.0, .02);
    else        play (0.0,   .02);
  }
}
