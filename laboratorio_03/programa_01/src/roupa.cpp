/**
 * @file roupa.cpp
 * @brief Implementação das funções e métodos da classe roupa.
 * @author Bryan Brito
 */

#include <iomanip>
#include "roupa.h"

/**
 * @brief Construtor padrão da classe.
 */
Roupa::Roupa() {}

/**
 * @brief Construtor parametrizado da classe.
 */
Roupa::Roupa(std::string _codigo, std::string _descricao, double _preco,
    std::string _marca, std::string _sexo, std::string _tamanho):
    Produto(_codigo, _descricao, _preco), m_marca(_marca), m_sexo(_sexo),
    m_tamanho(_tamanho) {}

/**
 * @brief Destrutor padrão da classe.
 */
Roupa::~Roupa() {}

/**
 * @brief Método get do atributo m_marca.
 * @return Atributo m_marca.
 */
std::string
Roupa::getMarca(){
    return m_marca;
}

/**
 * @brief Método get do atributo m_sexo.
 * @return Atributo m_sexo.
 */
std::string
Roupa::getSexo(){
    return m_sexo;
}

/**
 * @brief Método get do atributo m_tamanho.
 * @return Atributo m_tamanho.
 */
std::string
Roupa::getTamanho(){
    return m_tamanho;
}

/**
 * @brief Método set do atributo m_marca.
 * @param _marca passado como novo valor para m_marca.
 */
void
Roupa::setMarca(std::string _marca){
    m_marca = _marca;
}

/**
 * @brief Método set do atributo m_sexo.
 * @param _sexo passado como novo valor para m_sexo.
 */
void
Roupa::setSexo(std::string _sexo){
    m_sexo = _sexo;
}

/**
 * @brief Método set do atributo m_tamanho.
 * @param _tamanho passado como novo valor para m_tamanho.
 */
void
Roupa::setTamanho(std::string _tamanho){
    m_tamanho = _tamanho;
}

/**
 * @brief Sobrecarga do operador de inserção. Imprime os dados da classe Roupa.
 * @param o passado como operador de stream.
 */
std::ostream& 
Roupa::print(std::ostream &o) const {
	o << std::setfill (' ') << std::setw (10) << m_cod_barras << " | "
      << std::setfill ('.') << std::setw (20) << m_descricao << " | "
      << std::setfill (' ') << std::setw (6) << m_preco << " | "
	  << std::setfill (' ') << std::setw (10) << m_marca << " | "
      << std::setfill (' ') << std::setw (1) << m_sexo << " | "
      << std::setfill (' ') << std::setw(1) << m_tamanho << " | ";

	return o;
}
