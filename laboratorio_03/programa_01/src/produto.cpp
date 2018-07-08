/**
 * @file produto.cpp
 * @brief Implementação das funções e métodos da classe Produto.
 * @author Bryan Brito
 */

#include <iostream>
#include "produto.h"

/**
 * @brief Construtor padrão da classe.
 */
Produto::Produto() {}

/**
 * @brief Construtor parametrizado da classe.
 */
Produto::Produto(std::string _codigo, std::string _descricao, double _preco):
	m_cod_barras(_codigo), m_descricao(_descricao), m_preco(_preco) {}

/**
 * @brief Destrutor padrão da classe.
 */
Produto::~Produto(){}

/**
 * @brief Método get do atributo m_cod_barras.
 * @return Atributo m_cod_barras.
 */
std::string 
Produto::getCodBarras() {
	return m_cod_barras;
}

/**
 * @brief Método get do atributo m_descricao.
 * @return Atributo m_descricao.
 */
std::string 
Produto::getDescricao() {
	return m_descricao;
}

/**
 * @brief Método get do atributo m_preco.
 * @return Atributo m_preco.
 */
double 
Produto::getPreco() {
	return m_preco;
}

/**
 * @brief Método set do atributo m_cod_barras.
 * @param _codigo passado como novo valor para m_cod_barras.
 */
void 
Produto::setCodBarras(std::string _codigo) {
	m_cod_barras = _codigo;
}

/**
 * @brief Método set do atributo m_descricao.
 * @param _descricao passado como novo valor para m_descricao.
 */
void 
Produto::setDescricao(std::string _descricao) {
	m_descricao = _descricao;
}

/**
 * @brief Método set do atributo m_preco.
 * @param _preco passado como novo valor para m_preco.
 */
void
Produto::setPreco(double _preco) {
	m_preco = _preco;
}

/**
 * @brief Sobrecarga do operador de inserção.
 * @param o passado como operador de stream é o produto.
 */
std::ostream& operator<< (std::ostream &o, Produto const &p) {
	return p.print(o);
}

/**
 * @brief Sobrecarga do operador de comparação.
 * @param O Produto externo a ser comparado com produto que chama a função.
 */
bool
Produto::operator== (Produto &_produto){
	return (this -> m_cod_barras.compare(_produto.getCodBarras())) == 0;
}

/**
 * @brief Sobrecarga do operador de soma.
 * @param O Produto externo a ser comparado com produto que chama a função.
 */
double
Produto::operator+ (Produto &_produto){
    return this -> m_preco + _produto.getPreco();
}

/**
 * @brief Sobrecarga do operador de subtração.
 * @param O Produto externo a ser comparado com produto que chama a função.
 */
double
Produto::operator- (Produto &_produto){
    return this -> m_preco - _produto.getPreco();
}
