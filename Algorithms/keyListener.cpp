#include "characteristics/Parameters.h"
#include "characteristics/keyListener.h"

/*PwmOut redled(D2);
PwmOut greenled(D12);
RangeFinder ranger(D3, 10, 5800.0, 100000);

PwmOut pwmRight(D10);
DigitalOut dirRight(D8);
PwmOut pwmLeft(D9);
DigitalOut dirLeft(D7);
Serial pc(USBTX, USBRX);*/


keyListener::listener(){
    PwmOut redled(D2);
    PwmOut greenled(D12);
    RangeFinder ranger(D3, 10, 5800.0, 100000);
    Serial pc(USBTX, USBRX);

    PwmOut pwmRight(D10);
    DigitalOut dirRight(D8);
    PwmOut pwmLeft(D9);
    DigitalOut dirLeft(D7);
}

void keyListener::listener(){




    char c='z';
    while (1){
        c='z';
        if (pc.readable()) c=pc.getc();

        if (c=='m') {
            move();
            continue;
        }

        wait(1);
    }

}

