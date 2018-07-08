/**
 * @file primo.cpp
 * @author Bryan Brito.
*/
#include <set>
#include "primo.h"

/**
 * @brief Construtor padrão da classe.
 */
Primo::Primo() {}

/**
 * @brief Destrutor padrão da classe.
 */
Primo::~Primo() {}

/**
 * @brief Função que testa se um valor e primo ou não.
 * @param Número inteiro a ser testa.
 * @return True se o valor for primo, false se o valor não for primo.
 */
bool 
Primo::operator()(int m_primo) const{
    int numero = sqrt(m_primo);

    for(int i = 2; i <= numero; i ++){
        if(m_primo % i == 0){
            return false;
        }
    }

    return true;
}

/**
 * @brief Função que imprime os valores primos.
 * @param Número inteiro N, onde N sera o limite superior a ser testado.
 */
void
Primo::print(int m_numero){
    std::vector<int> range(m_numero);
    std::set<int> numero_primo;
    auto primo = range.begin();

    std::iota(range.begin(), range.end(), 1);

    for(auto it = range.begin(); it != range.end(); it ++){
        primo = find_if(it, range.end(), Primo());
    
        numero_primo.insert(*primo);
    }

    for(auto it = numero_primo.begin(); it != numero_primo.end(); it ++){
            std::cout << *it << " " ;
        }
}
