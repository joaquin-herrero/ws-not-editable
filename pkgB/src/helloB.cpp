#include <iostream>
#include "helloB.h"

#include "helloA.h"

void helloB(){
    #ifdef NDEBUG
    std::cout << "Hello World Release!" <<std::endl;
    #else
    std::cout << "Hello World Debug!" <<std::endl;
    #endif
}

int main() {
    helloB();
    helloA();
}