#include "abstraction.h"



int main()
{
    AbstractionImplement* absImp1 = new ConcreteAbstractionImplement1();
    Abstraction* abs1 = new DefinedAbstraction(absImp1);

    abs1->operation();

    AbstractionImplement* absImp2 = new ConcreteAbstractionImplement2();
    Abstraction* abs2 = new DefinedAbstraction(absImp2);

    abs2->operation();    
    return 0;

}
