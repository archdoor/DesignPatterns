#include "prototype.h"


int main()
{
    Prototype* p = new ConcretePrototype();

    Prototype* a = p->clone();
    return 0;

}




