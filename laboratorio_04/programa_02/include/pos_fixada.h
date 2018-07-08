/**
 * @file pos_fixada.h
 * @brief Protótipo das funções de tratamento de string.
 * @author Bryan Brito.
*/
#ifndef POS_FIXADA_H
#define POS_FIXADA_H


#include <memory>
#include "pilha.h"

void stringParaChar(Pilha<char> &m_char, std::string m_string);

int rpn(Pilha<char> &m_char);

#endif
