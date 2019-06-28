
keyListener::keyListener():actionMoteur(){}
void keyListener::moveAhead(){actionMoteur->moveAhead(); return;}
void keyListener::moveForward(){actionMoteur->moveForward(); return;}
void keyListener::stepTurn(int dir){actionMoteur->stepTurn(dir); return;}

//void keyListener::listener(){keyListener->listener(); return;}

void keyListener::bindServiceActionMoteur(ServiceActionMoteur* service) {
    actionMoteur=service;
    return;
}
