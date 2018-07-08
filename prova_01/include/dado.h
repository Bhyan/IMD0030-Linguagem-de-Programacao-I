#ifndef _DADO_H
#define _DADO_H

#include <random>

class Dado
{
    private:
        int m_valor;
        std::random_device m_rd;
        std::default_random_engine m_gen;
        std::uniform_int_distribution <> m_dis;

    public:
        Dado(int);
        ~Dado();
        int jogar();
        int getValor();
};

#endif
