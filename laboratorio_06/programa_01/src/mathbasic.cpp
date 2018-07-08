/**
 * @file mathbasic.cpp
 * @brief Implementação das funções da classe  MathBasic.
 * @author Bryan Brito.
*/

#include "mathbasic.h"


namespace mbasic{

    /**
    * @brief Função add.
    * @param inteiro v1.
    * @param inteiro v2.
    * @return inteiro com a soma de v1 e v2
    */
    int MathBasic::add(int v1, int v2) { return v1 + v2; }

    /**
    * @brief Função dif.
    * @param inteiro v1.
    * @param inteiro v2.
    * @return inteiro com a subtração de v1 e v2
    */
    int MathBasic::dif(int v1, int v2) { return v1 - v2; }

    /**
    * @brief Função mux.
    * @param inteiro v1.
    * @param inteiro v2.
    * @return inteiro com a multiplicação de v1 e v2
    */
    int MathBasic::mux(int v1, int v2) { return v1 * v2; }

    /**
    * @brief Função div.
    * @param inteiro v1.
    * @param inteiro v2.
    * @return inteiro com a divisão de v1 por v2
    */
    int MathBasic::div(int v1, int v2) { return v1 / v2; }

}
