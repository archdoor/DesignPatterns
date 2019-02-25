#ifndef _ADAPTER_H_
#define _ADAPTER_H_

#include "adaptee.h"


class Target
{
public:
    Target();
    virtual ~Target();

    virtual void request() = 0;

};


class Adapter: public Target
{
public:
    Adapter();
    ~Adapter();

    void request();


private:
    Adaptee* adaptee;

};


#endif
