/**
 * @file mathbasic.h
 * @brief Protótipo da classe MathBasic.
 * @author Bryan Brito.
*/

#ifndef MATHBASIC_H
#define MATHBASIC_H


namespace mbasic{

    class MathBasic{
        public:

            /**
            * @brief Função add.
            * @param inteiro v1.
            * @param inteiro v2.
            * @return inteiro com a soma de v1 e v2
            */
            static int add(int v1, int v2);

            /**
            * @brief Função dif.
            * @param inteiro v1.
            * @param inteiro v2.
            * @return inteiro com a subtração de v1 e v2
            */
            static int dif(int v1, int v2);

            /**
            * @brief Função mux.
            * @param inteiro v1.
            * @param inteiro v2.
            * @return inteiro com a multiplicação de v1 e v2
            */
            static int mux(int v1, int v2);

            /**
            * @brief Função div.
            * @param inteiro v1.
            * @param inteiro v2.
            * @return inteiro com a divisão de v1 por v2
            */
            static int div(int v1, int v2);

    };

}

#endif
