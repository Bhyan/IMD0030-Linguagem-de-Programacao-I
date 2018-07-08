/**
 * @file main.cpp
 * @author Bryan Brito.
*/
#include "primo.h"


int main(int argc, char const *argv[]){
    int numero_ = std::stoi(argv[1]);
    Primo p;

    std::cout << "Numeros primos [1-" << numero_ << "]: ";
    
    p.print(numero_);

    std::cout << std::endl;

    return 0;

}
