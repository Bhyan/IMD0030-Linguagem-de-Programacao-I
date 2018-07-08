/**
 * @file fruta.cpp
 * @brief Implementação das funções e métodos da classe Fruta.
 * @author Bryan Brito
 */

#include <iomanip>
#include "fruta.h"

/**
 * @brief Construtor padrão da classe.
 */
Fruta::Fruta() {}

/**
 * @brief Construtor parametrizado da classe.
 */
Fruta::Fruta(std::string _codigo, std::string _descricao, double _preco, 
	std::string _data, int _validade):
	Produto(_codigo, _descricao, _preco), m_data_lote(_data), m_validade(_validade) {}

/**
 * @brief Destrutor padrão da classe.
 */
Fruta::~Fruta() {}

/**
 * @brief Método get do atributo m_data_lote.
 * @return Atributo m_data_lote.
 */
std::string 
Fruta::getDataLote() {
	return m_data_lote;
}

/**
 * @brief Método get do atributo m_validade.
 * @return Atributo m_validade.
 */
int
Fruta::getValidade() {
	return m_validade;
}

/**
 * @brief Método set do atributo m_data_lote.
 * @param _data passado como novo valor para m_data_lote.
 */
void 
Fruta::setDataLote(std::string _data){
	m_data_lote = _data;
}

/**
 * @brief Método set do atributo m_validade.
 * @param _validade passado como novo valor para m_validade.
 */
void 
Fruta::setValidade(int _validade){
	m_validade = _validade;
}
 
/**
 * @brief Sobrecarga do operador de inserção. Imprime os dados da classe fruta.
 * @param o passado como operador de stream.
 */
std::ostream& 
Fruta::print(std::ostream &o) const {
	o << std::setfill (' ') << std::setw (10) << m_cod_barras << " | " 
		<< std::setfill ('.') << std::setw (20) << m_descricao << " | " 
		<< std::setfill (' ') << std::setw (5) << m_preco << " | "
		<< std::setfill (' ') << std::setw (10) << m_data_lote << " | " 
		<< std::setfill (' ') << std::setw (3) << m_validade;
	return o;
}

