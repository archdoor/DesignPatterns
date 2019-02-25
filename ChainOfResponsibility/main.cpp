#include <iostream>
#include "state.h"

using namespace std;

int main()
{
    Manager *general = new GeneralManager(NULL,"a");
    Manager *majordomo = new Majordomo(general,"b");
    Manager *common = new CommonManager(majordomo,"c");
    common->DealWithRequest("d",400);
    common->DealWithRequest("d",700);
    common->DealWithRequest("d",1200);
    return 0;
}
