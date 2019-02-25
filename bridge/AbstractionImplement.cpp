#include "AbstractionImplement.h"
#include <stdio.h>



AbstractionImplement::AbstractionImplement()
{


}


AbstractionImplement::~AbstractionImplement()
{


}


ConcreteAbstractionImplement1::ConcreteAbstractionImplement1()
{


}


ConcreteAbstractionImplement1::~ConcreteAbstractionImplement1()
{


}


void ConcreteAbstractionImplement1::operation()
{
    fprintf(stderr, "ConcreteAbstractionImplement1\n" );

}


ConcreteAbstractionImplement2::ConcreteAbstractionImplement2()
{


}


ConcreteAbstractionImplement2::~ConcreteAbstractionImplement2()
{


}


void ConcreteAbstractionImplement2::operation()
{
    fprintf(stderr, "ConcreteAbstractionImplement2\n" );

}
