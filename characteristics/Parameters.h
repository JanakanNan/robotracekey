#include "mbed.h"
#include "../RangeFinder.h"

#define UP 0
#define DOWN 1

#define LEFT 0
#define RIGHT 1


class ServiceActionMoteur {
public:
    virtual void moveAhead()=0;
    virtual void moveForward()=0;
    virtual void stepTurn(int dir)=0;
};

class ServiceRequisActionMoteur {
public:
    virtual void bindServiceActionMoteur(ServiceActionMoteur* service)=0;
};

class ServiceInitialisation {
public:
    virtual void activate()=0;
};

class ServiceRequisInitialisation {
public:
    virtual void bindServiceInitialisation(ServiceInitialisation* service)=0;
};

class ServiceActionPasAPas {
public:
    //virtual void step()=0;
};

class ServiceRequisActionPasAPas {
public:
    virtual void bindServiceActionPasAPas(ServiceActionPasAPas* service)=0;
};


//---COMPOSANTS---//
class Hardware: public ServiceActionMoteur {
public:
    Hardware();
    void moveAhead();
    void moveForward();
    void stepTurn(int dir);
};

class keyListener: public ServiceRequisActionMoteur,
                     public ServiceInitialisation,
                     public ServiceActionPasAPas{
private:
    ServiceActionMoteur* actionMoteur;
public:
    keyListener();
    void activate();
    //void step();
    void bindServiceActionMoteur(ServiceActionMoteur* service);
    void moveAhead();
    void moveForward();
    void stepTurn(int dir);
    char listener();
    void moveAhead(char c);
    void moveForward(char c);
};
