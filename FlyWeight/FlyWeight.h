#ifndef _FLYWEIGHT_H_
#define _FLYWEIGHT_H_


class FlyWeight
{
public:
    FlyWeight(){};
    virtual ~FlyWeight(){};

    virtual void operation() = 0;


};


class ConcreteFlyWeight: public FlyWeight
{
public:
    ConcreteFlyWeight(){};
    ~ConcreteFlyWeight(){};

    void operation();


};



#endif



