#ifndef _DECORATOR_H_
#define _DECORATOR_H_

#include "component.h"

class Decorator: public Component
{
public:
    Decorator();
    virtual ~Decorator();

    virtual void operation();
    virtual void setComponent(Component* pComponent);

protected:
    Component* mComponent;

};


class ConcreteDecorator: public Decorator
{
public:
    ConcreteDecorator();
    virtual ~ConcreteDecorator();

    virtual void addBehavior();

};


#endif



