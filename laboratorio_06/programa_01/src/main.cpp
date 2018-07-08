/**
 * @file main.cpp
 * @brief Simples programa para teste a lib mathbasic.
 * @author Bryan Brito.
*/

#include <iostream>
#include "mathbasic.h"


using namespace mbasic;

int main(){
    MathBasic p;

    std::cout << p.add(2, 5) << std::endl;

    return 0;
}
