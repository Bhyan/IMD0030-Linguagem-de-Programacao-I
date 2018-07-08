#include "jogo.h"
#include <iostream>


int main(){
    Jogo jogo;

    jogo.addJogador(new Jogador("Alice"));
    jogo.addJogador(new Jogador("Bob"));
    jogo.addJogador(new Jogador("Carl"));
    
    jogo.run();

    return 0;
}
