#include "jogo.h"
#include <iostream>

Jogo::Jogo():m_total_jogadores(0),m_d3(3),m_d6(6),m_d8(8),m_d12(12),m_d20(20){}

Jogo::~Jogo() {}

void
Jogo::addJogador(Jogador *novo_){
    if(m_total_jogadores < MAX_JOGADOR){
        m_jogadores[m_total_jogadores++] = novo_;
    }
}

void
Jogo::run(){
    int maior = 50;

    for(int i = 0; i < m_total_jogadores; i++){
        m_jogadores[i] -> jogada(m_d3, m_d6, m_d8, m_d12, m_d20);

        std::cout << m_jogadores[i] -> getNome() << " acumulou " 
        << m_jogadores[i] -> getValor() << "." << std::endl;

        if(m_jogadores[i] -> getValor() < maior){
            m_vencedor = m_jogadores[i];
            maior = m_jogadores[i] -> getValor();
        }
    }
    
    std::cout << "O vencedor foi " << m_vencedor -> getNome()
    << " com o total de " << m_vencedor -> getValor() << "." << std::endl;

}
