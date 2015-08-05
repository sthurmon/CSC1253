#include <iostream>
#include "unistd.h"
using namespace std;

void blink (string str1, string str2, int n) {
   int i;
   for (i=0; i<n; i++) {
     cout << str1;
     cout << flush;
     sleep(1);
     cout << string(80, '\n');
     cout << str2;
     cout << flush;
     usleep(300);
     cout << string(80, '\n');
   }
}

int main() {
   blink("Hello, world!", "Give me an A!", 10);
}
