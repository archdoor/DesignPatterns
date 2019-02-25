#ifndef _FLYWEIGHT_FACTORY_H_
#define _FLYWEIGHT_FACTORY_H_

#include <vector>
#include "FlyWeight.h"

using namespace std;

class FlyWeightFactory
{
public:
    FlyWeightFactory();
    ~FlyWeightFactory();

    FlyWeight* GetFlyWeight(int key);

private:
    vector<FlyWeight*> m_flyWeights;//很多时候为了增加效率，使用hash表之类的结构，这里简单的使用vector

};

#endif
