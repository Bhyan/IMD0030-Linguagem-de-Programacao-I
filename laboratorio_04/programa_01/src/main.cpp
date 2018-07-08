/*
 * @file main.cpp
 * @brief Função main.
 * @author Bryan Brito.
*/
#include <iostream>
#include <memory>
#include "limpa_string.h"


int main(int argc, char const *argv[]){
	shared_ptr<ListaLigada<char>> m_char = make_shared<ListaLigada<char>>();
    std::string frase;

    std::cout << "Digite uma palavra ou frase." << std::endl;
    getline(std::cin, frase);

    stringParaChar(m_char, frase);
    
    limpaString(m_char);

    maiusculaMinuscula(m_char);

    if(palindromo(m_char)){
        std::cout << frase << " é palíndromo." << std::endl;
    }
    else{
        std::cout << frase << " não é palíndromo." << std::endl;
    }

	return 0;
}
