#include "color.h"
#include "typeout.h"
#include "unistd.h"
#include <iostream>
using namespace std;

int main() {
  string watch[11] = {
  " /~~~< Watch what you think,\n", 
  "|      for it becomes words.\n",
  "|          Watch your words,\n", 
  "|          for they become actions.\n",
  "|               Watch your actions,\n",
  "v               for they become habits.\n",
  "|                    Watch your habits,\n",
  "|                    for they become character.\n",
  "|                         Watch your character,\n",
  " \\~~~~~~~~~~~~~~~~~~~>    for it becomes",
  " your destiny."
  };
  string doit[34] = {
   "People are often unreasonable,\n",
   "Irrational, and self-centered.\n",
   "Forgive them anyway.          \n",
   "\n",
   "  If you are kind, people may accuse you\n"  ,
   "  Of selfish, ulterior motives.\n"  ,
   "  Be kind anyway.              \n"  ,
   "\n",
   "If you are successful, you will win some\n",
   "Unfaithful friends and some genuine enemies.\n",
   "Succeed anyway.              \n",
   "\n",
   "  If you are honest and sincere\n"  ,
   "  People may deceive you.\n"  ,
   "  Be honest and sincere anyway.\n"  ,
   "  \n"  ,
   "What you spend years creating,\n",
   "Others could destroy overnight.\n",
   "Create anyway.\n",
   "\n",
   "  If you find sincerity and happiness,\n"  ,
   "  Some may be jealous.\n"  ,
   "  Be happy anyway.\n"  ,
   "  \n"  ,
   "The good you do today,\n",
   "Will often be forgotten.\n",
   "Do good anyway.\n",
   "\n",
   "  Give it the best you have,\n"  ,
   "  Though it may never be enough.\n"  ,
   "  Give your best anyway.\n"  ,
   "  \n"  ,
   "You see, in the final analysis, it is about you and the meaning of your life.\n",
   "It was never about them anyway.\n"
  };

  int i;

/*
  for (i=0; i<11; i++) {
    if (i==10) typeout(watch[i], 12); 
    else       typeout(watch[i], 10-i); 
  }
*/

  for (i=0; i<34; i++) {
    typeout(doit[i], 5); 
    if (i%4 == 1) {
      usleep(1000000);
    } 
    else if (i==32) {
      usleep(2000000);
    }
    else if (i==33) {
      usleep(3000000);
    }
  }

  sleep(5);
  cout << endl;
}
