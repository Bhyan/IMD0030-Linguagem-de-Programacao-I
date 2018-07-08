/**
 * @file limpa_string.cpp
 * @brief Implementação das funções de tratamento de string.
 * @author Bryan Brito.
*/
#include "limpa_string.h"

/*
 * @brief Função transforma variável do tipo string em um ponteiro do tipo ListaLigada.
 * @param Ponteiro de ListaLigada do tipo char.
 * @param String com a palavra/frase.
*/
void stringParaChar(shared_ptr<ListaLigada<char>> m_char, std::string m_string){
 
    for(unsigned int i = 0; i < m_string.size(); i ++){
        m_char -> InsereNoFinal(m_string[i]);
    }

}

/*
 * @brief Função trata os caracteres do ponteiro.
 * @details Percorre elemento por elemento do ponteiro, onde e retirado os caracteres com acentos
 * espaços e caracteres especiais.
 * @param Ponteiro de ListaLigada do tipo char.
*/
void limpaString(std::shared_ptr<ListaLigada<char>> m_char){
    shared_ptr<Node<char>> it = nullptr;
    int posicao = 1;

	for(it = m_char -> getCabeca();it != m_char -> getCauda(); it = it -> getNext()){
        if(it -> getValor() < 'a' || it -> getValor() > 'z' || it -> getValor() < 'A' || it -> getValor() > 'Z'){
            m_char -> RemoveNaPosicao(--posicao);
        }
        posicao ++;
    }
}

/*
 * @brief Função converte caracteres maiúsculos em minúsculos.
 * @details Percorre elemento por elemento do ponteiro, onde substitui caractere maiúsculo por seu
 * homônimo minúsculo.
 * @param Ponteiro de ListaLigada do tipo char.
*/
void maiusculaMinuscula(std::shared_ptr<ListaLigada<char>> m_char){
    shared_ptr<Node<char>> it = nullptr;

	for(it = m_char -> getCabeca();it != m_char -> getCauda(); it = it -> getNext()){
        it -> setValor(tolower(it -> getValor()));
        std::cout << it -> getValor() << std::endl;
    }
}

/*
 * @brief Função checa se a palavra/frase é palíndromo.
 * @details Os elementos contidos no ponteiro são tranferidos para a pilha. Usando as operações
 * pilha, e retirado o elemento do topo e comparado com o elemento do ponteiro ListaLigada, caso os
 * valores coincidam a palavra/frase sera palíndromo.
 * @param Ponteiro de ListaLigada do tipo char.
 * @return true se a palavra/frase for palídromo, false se não.
*/
bool palindromo(std::shared_ptr<ListaLigada<char>> m_char){
    shared_ptr<Node<char>> it = nullptr;
    Pilha<char> frase(m_char -> size());

    // Preenche a pilha.
	for(it = m_char -> getCabeca();it != m_char -> getCauda(); it = it -> getNext()){
        frase.push(it -> getValor());
    }

	for(it = m_char -> getCabeca();it != m_char -> getCauda(); it = it -> getNext()){
        if(it -> getValor() != frase.top()){
            return false;
        }
        frase.pop();
    }

    return true;
}
