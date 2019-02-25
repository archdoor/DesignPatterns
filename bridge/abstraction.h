#ifndef _ABSTRACTION_H_
#define _ABSTRACTION_H_

#include "AbstractionImplement.h"

class Abstraction
{
public:
    Abstraction();
    virtual ~Abstraction();

    virtual void operation() = 0;



};

class DefinedAbstraction: public Abstraction
{
public:
    DefinedAbstraction(AbstractionImplement* absImp);
    ~DefinedAbstraction();

    void operation();

private:
    AbstractionImplement* absImp;

};


#endif



