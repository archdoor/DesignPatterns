#include "adapter.h"


int main()
{
    Target* tar = new Adapter();
    tar->request();
    return 0;

}

