#include <random>
#include "dado.h"


Dado::Dado(int max):m_gen(m_rd()), m_dis(1, max){
    m_valor = std::round(m_dis(m_gen));
}

Dado::~Dado(){}

int
Dado::jogar(){
    m_valor = std::round(m_dis(m_gen));
    return m_valor;
}

int
Dado::getValor(){
    return m_valor;
}
