#include "characteristics/Parameters.h"

/*#define DELTA 200
#define DELTATEMPS 0.4

#define UP 0
#define DOWN 1

#define LEFTUP 0
#define LEFTDOWN 1
#define RIGHTUP 1
#define RIGHTDOWN 0


*/

int main() {



    ServiceActionMoteur* hardware = new Hardware();



    keyListener* Listener = new keyListener();

    Listener->bindServiceActionMoteur(hardware);


    Listener->listener();



  /*wait(1);

  char c='z';
  while (1) {
    c='z';
    if (pc.readable()) c=pc.getc();

    if (c=='m') {
      dirRight=RIGHTUP;
      dirLeft=LEFTUP;
      pwmRight.pulsewidth_us(300);
      pwmLeft.pulsewidth_us(300);
      wait(2);
      pwmRight.pulsewidth_us(0);
      pwmLeft.pulsewidth_us(0);
      continue;
    }
    if (c=='b') {
      dirRight=RIGHTDOWN;
      dirLeft=LEFTDOWN;
      pwmRight.pulsewidth_us(300);
      pwmLeft.pulsewidth_us(300);
      wait(2);
      pwmRight.pulsewidth_us(0);
      pwmLeft.pulsewidth_us(0);
      continue;
    }

    wait(DELTATEMPS);
  }*/

}
