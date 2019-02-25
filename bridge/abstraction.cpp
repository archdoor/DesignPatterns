#include "abstraction.h"


Abstraction::Abstraction()
{


}



Abstraction::~Abstraction()
{


}


DefinedAbstraction::DefinedAbstraction(AbstractionImplement* absImp)
{
    this->absImp = absImp;

}


DefinedAbstraction::~DefinedAbstraction()
{


}


void DefinedAbstraction::operation()
{
    absImp->operation();

}



