#include "adapter.h"


Target::Target()
{


}


Target::~Target()
{


}


Adapter::Adapter(): adaptee(new Adaptee())
{


}


Adapter::~Adapter()
{


}


void Adapter::request()
{
    adaptee->specificRequest();

}
