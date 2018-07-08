#ifndef JOGO_H
#define JOGO_H

#define MAX_JOGADOR 3

#include "jogador.h"


class Jogo
{
    private:
        Jogador *m_jogadores[MAX_JOGADOR];
        int m_total_jogadores;
        Jogador *m_vencedor = nullptr;
        Dado m_d3;
        Dado m_d6;
        Dado m_d8;
        Dado m_d12;
        Dado m_d20;

    public:
        Jogo();
        ~Jogo();

        void addJogador(Jogador *);
        void run();

};

#endif
