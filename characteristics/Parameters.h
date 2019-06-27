#include "mbed.h"
#include "../RangeFinder.h"


class ServiceActionMoteur {
public:
    virtual void move()=0;
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
    virtual void step()=0;
};

class ServiceRequisActionPasAPas {
public:
    virtual void bindServiceActionPasAPas(ServiceActionPasAPas* service)=0;
};


//---COMPOSANTS---//
class Hardware: public ServiceActionMoteur {
public:
    Hardware();
    void move();
};

class keyListener: public ServiceRequisActionMoteur,
                     public ServiceInitialisation,
                     public ServiceActionPasAPas{
private:
    ServiceActionMoteur* actionMoteur;
public:
    keyListener();
    void bindServiceActionMoteur(ServiceActionMoteur* service);
    void move();
    void listener();
};
