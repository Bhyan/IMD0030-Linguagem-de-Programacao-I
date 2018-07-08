#include "dado.h"
#include "jogador.h"


int main(){
    int n_jogador;
    std::string nome_jogador;

    std::cout << "Digite o número de jogadores: ";
    std::cin > n_jogador;

    for(int i = 0; i < n_jogador; i ++){
        std::cout << "Cadastro jogador nº " << i << std::endl;
        std::cout << "Nome do jogador: ";
        std::cin >> nome_jogador;
    }

    return 0;
}
