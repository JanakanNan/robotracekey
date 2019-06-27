
keyListener::keyListener():actionMoteur(){}
void keyListener::move(){actionMoteur->move(); return;}

//void keyListener::listener(){keyListener->listener(); return;}

void keyListener::bindServiceActionMoteur(ServiceActionMoteur* service) {
    actionMoteur=service;
    return;
}
