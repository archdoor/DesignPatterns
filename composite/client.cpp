#include "composite.h"


int main()
{
    Component* leaf1 = new Leaf();
    Component* leaf2 = new Leaf();

    Composite* composite1 = new Composite();
    composite1->add(leaf1);
    composite1->add(leaf2);

    Composite* composite2 = new Composite();
    composite2->add(composite1);

    composite2->operation();
    return 0;

}
