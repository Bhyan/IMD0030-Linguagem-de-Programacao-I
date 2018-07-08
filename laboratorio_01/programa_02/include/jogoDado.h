#ifndef JOGO_DADO_H
#define JOGO_DADO_H

#include "jogador.h"


class JogoDado
{
private:
    int m_valor_acumular;
    int m_rodada;
    Jogador *m_vencedor = nullptr;
    
public:
    JogoDado(int);
    ~JogoDado();

    void setRodada();
    void run();

#endif
