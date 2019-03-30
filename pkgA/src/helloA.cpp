#include <iostream>
#include "helloA.h"

void helloA(){
    #ifdef NDEBUG
    std::cout << "HelloA World Release!" <<std::endl;
    #else
    std::cout << "HelloA World Debug!" <<std::endl;
    #endif
}
