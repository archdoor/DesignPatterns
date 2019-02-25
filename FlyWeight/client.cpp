#include "FlyWeightFactory.h"



int main()
{
    FlyWeightFactory* factory = new FlyWeightFactory();

    FlyWeight* flyWeight = factory->GetFlyWeight(0);
    flyWeight->operation();
    return 0;

}



