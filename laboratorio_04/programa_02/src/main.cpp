/*
 * @file main.cpp
 * @brief Função main.
 * @author Bryan Brito.
*/
#include <iostream>
#include "pos_fixada.h"

int main(){
    std::string p;
    int result;

    std::cout << "Digite a expressão:";

    std::getline(std::cin, p);
    p = "a" + p;

    Pilha<char> pos(p.size());

    stringParaChar(pos, p);

    result = rpn(pos);

    std::cout << "Resultado: " << result << std::endl;

    return 0;
}
