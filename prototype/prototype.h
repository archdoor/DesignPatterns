#ifndef _PROTOTYPE_H_
#define _PROTOTYPE_H_


class Prototype{

public:
    Prototype();
    virtual ~Prototype();

    virtual Prototype* clone() = 0;

};


class ConcretePrototype:public Prototype{

public:
    ConcretePrototype();
    ~ConcretePrototype();

    Prototype* clone();

private:
    ConcretePrototype(const ConcretePrototype&);

};

#endif



