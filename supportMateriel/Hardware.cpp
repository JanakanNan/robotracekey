//
// Created by Nandakumaran on 2019-06-27.
//

#include "characteristics/Parameters.h"
#include "mbed.h"

#define DELTA 200
#define DELTATEMPS 0.4

#define UP 0
#define DOWN 1

#define LEFTUP 0
#define LEFTDOWN 1
#define RIGHTUP 1
#define RIGHTDOWN 0

/*PwmOut redled(D2);
PwmOut greenled(D12);
RangeFinder ranger(D3, 10, 5800.0, 100000);*/

PwmOut pwmRight(D10);
DigitalOut dirRight(D8);
PwmOut pwmLeft(D9);
DigitalOut dirLeft(D7);

Hardware::Hardware() {
    pwmRight.period_us(1000);
    pwmLeft.period_us(1000);
    dirRight=RIGHTUP;
    dirLeft=LEFTUP;
    pwmRight.pulsewidth_us(0);
    pwmLeft.pulsewidth_us(0);
    wait(1);
}

void Hardware::move() {
    dirRight=RIGHTUP;
    dirLeft=LEFTUP;
    pwmRight.pulsewidth_us(300);
    pwmLeft.pulsewidth_us(300);
    wait(2);
    pwmRight.pulsewidth_us(0);
    pwmLeft.pulsewidth_us(0);
    return;
}