/**
 * @file bebida.cpp
 * @brief Implementação das funções e métodos da classe Bebida.
 * @author Bryan Brito
 */

#include <iomanip>
#include "bebida.h"

/**
 * @brief Construtor padrão da classe.
 */
Bebida::Bebida() {}

/**
 * @brief Construtor parametrizado da classe.
 */
Bebida::Bebida(std::string _codigo, std::string _descricao, double _preco,
    int _teor_alcool):
    Produto(_codigo, _descricao, _preco), m_teor_alcool(_teor_alcool) {}

/**
 * @brief Destrutor padrão da classe.
 */
Bebida::~Bebida() {}

/**
 * @brief Método get do atributo m_teor_alcool.
 * @return Atributo m_teor_alcool.
 */
int
Bebida::getTeorAlcool(){
    return m_teor_alcool;
}

/**
 * @brief Método set do atributo m_teor_alcool.
 * @param _teor_alcool passado como novo valor para m_teor_alcool.
 */
void
Bebida::setTeorAlcool(int _teor_alcool){
    m_teor_alcool = _teor_alcool;
}

/**
 * @brief Sobrecarga do operador de inserção. Imprime os dados da classe bebida.
 * @param o passado como operador de stream.
 */
std::ostream& 
Bebida::print(std::ostream &o) const {
	o << std::setfill (' ') << std::setw (10) << m_cod_barras << " | " 
	<< std::setfill ('.') << std::setw (20) << m_descricao << " | " 
	<< std::setfill (' ') << std::setw (5) << m_preco << " | "
	<< std::setfill (' ') << std::setw (10) << m_teor_alcool << "%" << "| ";

	return o;
}
