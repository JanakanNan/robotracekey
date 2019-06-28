#include "characteristics/Parameters.h"
#include "characteristics/keyListener.h"

/*PwmOut redled(D2);
PwmOut greenled(D12);
RangeFinder ranger(D3, 10, 5800.0, 100000);*/


Serial pc(USBTX, USBRX);

void keyListener::activate() {

    //wait(1);
    //actionMoteur->initHeadingDeg();
    return;
}


char keyListener::listener(){


    char c='a';
    while (1){


        c='a';
        if (pc.readable()) c=pc.getc();

        if (c == 'z') {
            moveAhead();
        }

        if (c == 's') {
            moveForward();
        }

        if (c == 'q') {
            stepTurn(LEFT);
        }

        if (c == 'd') {
            stepTurn(RIGHT);
        }



    }

}


/*

void keyListener::moveAhead(char c) {
    if (c == 'z') {
        moveAhead();
    }
}

void keyListener::moveForward(char c) {
    if (c == 's') {
        moveForward();
    }
}

void keyListener::stepTurn(int i) {
    if (c == 'q') {
        stepTurn(LEFT);
    }
}

void keyListener::stepTurn(int i) {
    if (c == 'd') {
        stepTurn(RIGHT);
    }
}*/

