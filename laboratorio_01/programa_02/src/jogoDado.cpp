#include "jogoDado.h"


JogoDado::JogoDado(int valor_acumular_){
    m_valor_acumular = valor_acumular_;
}

JogoDado::~JogoDado(){}

void
JogoDado::setRodada(){
    m_rodada ++;
}

void
JogoDado::run(){}
