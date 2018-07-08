#ifndef DADO_H
#define DADO_H

#include <iostream>


class Jogador
{
private:
    std::string m_nome;
    int m_valor_acumulado;

    std::random_device              rd; 
    std::default_random_engine      gen; 
    std::uniform_int_distribution<> dis;
public:
    Jogador(std::string, int);
    ~Jogador();

    std::string getNome();

    void setValor(int)
    int getValor();

};

#endif
