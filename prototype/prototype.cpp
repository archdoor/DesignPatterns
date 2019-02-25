#include "prototype.h"
#include <stdio.h>


Prototype::Prototype()
{


}


Prototype::~Prototype()
{


}


ConcretePrototype::ConcretePrototype()
{


}


ConcretePrototype::~ConcretePrototype()
{


}


ConcretePrototype::ConcretePrototype(const ConcretePrototype& c)
{
    fprintf(stderr,"ConcretePrototype copy construct!\n");

}


Prototype* ConcretePrototype::clone()
{
    return new ConcretePrototype(*this);

}


