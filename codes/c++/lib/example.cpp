#include "sound.h"
#include <iostream>
using namespace std;
using namespace snd;

int main() {
  float f;
  for (f=1; f<256.0; f*=2) 
    play(440.0+f, .25);
  for (f=1; f<256.0; f*=2) 
    play(400.0+f, .25);
  for (f=1; f<256.0; f*=2) 
    play(600.0+f, .25);
  for (f=1; f<256.0; f*=2) 
    play(480.0+f, .25);
}
