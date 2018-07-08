/*
 * @file pos_fixada.cpp
 * @brief Implementação das funções de tratamento de string.
 * @author Bryan Brito.
*/
#include "pos_fixada.h"

/*
 * @brief Função transforma variável do tipo string em um tipo pilha.
 * @param Uma pilha do tipo char.
 * @param String com as operações.
*/
void stringParaChar(Pilha<char> &m_char, std::string m_string){

    for(unsigned int i = m_string.size(); i != 0; i --){
        m_char.push(m_string[i]);
    }

}

/*
 * @brief Função efetua o calculo da notação polonesa inversa.
 * @details Percorre elemento por elemento da pilha, onde se o elemento for um número ele é
 * armazenado na pilha aux, se for uma operação, os valores já empilhados são desempilhados,
 * efetuado a operação é devolvido para a pilha. Ao chegar no fim da pilha, o resultado das
 * operações é retornado.
 * @param Uma pilha do tipo char.
 * @return Resultado das operações.
*/
int rpn(Pilha<char> &m_char){
    Pilha<int> aux;
    int num1 = 0, num2 = 0, result = 0;    

    while(m_char.top() != '\000'){
        result = 0;

        if(m_char.top() == '+' && !aux.empty()){
            m_char.pop();
            num1 = (aux.top());
            aux.pop();
            num2 = (aux.top());
            aux.pop();
            aux.push(num1 + num2);
        }

        else if(m_char.top() == '-' && !aux.empty()){
            m_char.pop();
            num1 = (aux.top());
            aux.pop();
            num2 = (aux.top());
            aux.pop();
            aux.push(num2 - num1);
        }

        else if(m_char.top() == '*' && !aux.empty()){
            m_char.pop();
            num1 = (aux.top());
            aux.pop();
            num2 = (aux.top());
            aux.pop();
            aux.push(num1 * num2);
        }

        else if(m_char.top() == '/' && !aux.empty()){
            m_char.pop();
            num1 = (aux.top());
            aux.pop();
            num2 = (aux.top());
            aux.pop();
            aux.push(num2 / num1);
        }

        else if(m_char.top() == ' '){
            m_char.pop();
        }

        else{
            aux.push(m_char.top() - '0');
            m_char.pop();
        }

    }

    result = aux.top();

    return result;
}
