#include "jogador.h"

Jogador::Jogador(std::string nome){
    m_nome = nome;
}

Jogador::~Jogador(){}

std::string
Jogador::getNome(){
    return m_nome;
}

void
Jogador::setValor(int valor){
    m_valor_acumulado += valor;
}

int 
Jogador::getValor(){
    return m_valor_acumulado;
}

void
Jogador::jogada(Dado &d3, Dado &d6, Dado &d8, Dado &d12, Dado &d20){
    m_valor_acumulado = d3.jogar() + d6.jogar() + d8.jogar() + d12.jogar() + d20.jogar();
}
