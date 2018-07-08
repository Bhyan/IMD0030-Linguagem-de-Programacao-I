/**
 * @file limpa_string.h
 * @brief Protótipo das funções de tratamento de string.
 * @author Bryan Brito.
*/

#ifndef LIMPA_STRING_H
#define LIMPA_STRING_H


#include <iostream>
#include <memory>
#include "pilha.h"
#include "lista.h"


void stringParaChar(std::shared_ptr<ListaLigada<char>> m_char, std::string m_string);

void limpaString(std::shared_ptr<ListaLigada<char>> m_char);

void maiusculaMinuscula(std::shared_ptr<ListaLigada<char>> m_char);

void removeCaracEspeciais(std::shared_ptr<ListaLigada<char>> m_char);

bool palindromo(std::shared_ptr<ListaLigada<char>> m_char);

#endif
