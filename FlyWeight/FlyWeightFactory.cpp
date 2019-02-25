#include <iostream>
#include "FlyWeightFactory.h"

FlyWeightFactory::FlyWeightFactory()
{
    FlyWeight* tmp = new ConcreteFlyWeight();
    m_flyWeights.push_back(tmp);

}




FlyWeightFactory::~FlyWeightFactory()
{
    FlyWeight* tmp = m_flyWeights.at(0);
    delete tmp;
    tmp = NULL;

}




FlyWeight* FlyWeightFactory::GetFlyWeight(int key)
{
    //简单点表示
    return m_flyWeights.at(key);
}


