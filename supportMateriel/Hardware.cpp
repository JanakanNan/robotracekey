//
// Created by Nandakumaran on 2019-06-27.
//

#include "characteristics/Parameters.h"
#include "mbed.h"

#define DELTA 200
#define DELTATEMPS 0.4



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
    dirRight=1;
    dirLeft=0;
    pwmRight.pulsewidth_us(0);
    pwmLeft.pulsewidth_us(0);
    wait(1);
}

void Hardware::moveAhead() {
    dirRight=1;
    dirLeft=0;
    pwmRight.pulsewidth_us(300);
    pwmLeft.pulsewidth_us(300);
    wait(2);
    pwmRight.pulsewidth_us(0);
    pwmLeft.pulsewidth_us(0);
    return;
}

void Hardware::moveForward(){
    dirRight=0;
    dirLeft=1;
    pwmRight.pulsewidth_us(300);
    pwmLeft.pulsewidth_us(300);
    wait(2);
    pwmRight.pulsewidth_us(0);
    pwmLeft.pulsewidth_us(0);
    return;

}

void Hardware::stepTurn(int dir) {
    if (dir==1) {
        dirLeft=0;
        dirRight=0;
        pwmLeft.pulsewidth_us(400);
        pwmRight.pulsewidth_us(200);
    } else {
        dirLeft=1;
        dirRight=1;
        pwmLeft.pulsewidth_us(200);
        pwmRight.pulsewidth_us(400);
    }
    return;
}