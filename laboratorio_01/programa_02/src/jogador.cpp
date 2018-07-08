#include "jogador.h"


Jogador::Jogador(std::string nome_, int valor_ = 0): rd(), gen(rd()){
    m_nome = nome_;
    m_valor_acumulado = valor_;
}

Jogador::~Jogador() {}

std::string
Jogador::getNome(){
    return m_nome;
}

void
Jogador::setValor(int valor_){
    m_valor_acumulado += valor_;
}

int
Jogador::getValor(){
    return m_valor_acumulado;
}
