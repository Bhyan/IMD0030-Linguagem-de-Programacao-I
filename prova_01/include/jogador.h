#ifndef _JOGADOR_H
#define _JOGADOR_H

#include "dado.h"


class Jogador
{
    private:
        std::string m_nome;
        int m_valor_acumulado;

    public:
        Jogador(std::string);
        ~Jogador();

        std::string getNome();

        void setValor(int);
        int getValor();

        void jogada(Dado &, Dado &, Dado &, Dado &, Dado &);
};

#endif
