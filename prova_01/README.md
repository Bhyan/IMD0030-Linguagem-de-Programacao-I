Questão 7. (3,0)
================
Alice, Bob e Carl resolveram iniciar uma aventura RPG, mas antes, para decidir quem comandaria o jogo, decidiram
jogar 5 (cinco) dados com diferentes dimensões, nomeadamente: Tetrahedron (quatro lados e valores de 1 a 3), 
Cube (6 lados e valores de 1 a 6), Octahedron (8 faces e valores de 1 a 8), Dodecahedron (12 faces e valores 
de 1 a 12) e Icosahedron (20 faces e valores de 1 a 20). Assim, aquele que obtiver o MENOR valor agregado,
será declarado o vencedor e comandará esta jornada de RPG.

Considere como implementação base a definição e implementação da classe Dado, apresentada a seguir. 
Realize as alterações necessárias e implemente o que mais julgar necessário para implementar um programa 
que simule a situação de Alice, Bob e Carl, permitindo indicar o vencedor. É obrigatório o uso de Makefile
para a correta compilação.

Definição da classe Dado.

```
#ifndef DADO_H
#define DADO_H

#include class Dado
{
  private:
    int m_valor;
    std::random_device m_rd;
    std::default_random_engine m_gen;
    std::uniform_int_distribution <> m_dis;
  
  public:
    Dado ();
    int jogar();
    int getValor();

};

#endif

Implementação da classe Dado.

#include
#include "dado.h"

Dado::Dado():m_gen(m_rd()), m_dis(1, 6){ m_valor = std::round(m_dis(m_gen)); }

int 
Dado::jogar(){
  m_valor = std::round(m_dis(m_gen)); return m_valor;
}

int
Dado::getValor(){
  return m_valor;
}
```
