/**
 * @file estoque.cpp
 * @brief Implementação das funções e métodos da classe Estoque.
 * @author Bryan Brito
 */

#include <fstream>
#include <string>
#include "produto.h"
#include "estoque.h"
#include "bebida.h"
#include "fruta.h"
#include "roupa.h"

/**
 * @brief Construtor padrão da classe.
 */
Estoque::Estoque() {}

/**
 * @brief Destrutor padrão da classe.
 */
Estoque::~Estoque() {}

/**
 * @brief Método get do vector m_estoque.
 * @return Vector m_estoque.
 */
std::vector<std::shared_ptr<Produto>>
Estoque::getEstoque(){
    return m_estoque;
}

/**
 * @brief Método adiciona os produtos ao vector m_estoque.
 */
void
Estoque::addProduto(std::shared_ptr<Produto> _produto){
    m_estoque.push_back(_produto);
}

/**
 * @brief Método imprime na tela os produtos contidos no vector m_estoque.
 */
void
Estoque::imprimirEstoque(){
    if(m_estoque.empty()){
        std::cout << "Estoque vazio." << std::endl;
        exit(1);
    }
    else{
        for(auto i = m_estoque.begin(); i != m_estoque.end() - 1; ++ i){
            std::cout << (**i) << std::endl;
        }
    }
}

/**
 * @brief Método lê os arquivos encontrados na pasta files e chama o método addProduto.
 */
void
Estoque::lerArquivo(std::string _arquivo){
    std::string _codigo, _descricao, _preco;
    std::ifstream arquivo;
    
    arquivo.open("files/" + _arquivo);

    if(arquivo.bad()){
        std::cout << "Arquivo " << _arquivo << " não foi aberto." << std::endl;
        exit(1);
    }

    else{
        if(_arquivo == "bebida.bat"){
            std::string _teor_alcool;
            m_estoque.clear();
            while(!arquivo.eof()){
                std::getline(arquivo, _codigo, ';');
                std::getline(arquivo, _descricao, ';');
                std::getline(arquivo, _preco, ';');
                std::getline(arquivo, _teor_alcool, ';');

                addProduto(std::make_shared<Bebida>(_codigo, _descricao, std::stod(_preco),
                       std::stoi(_teor_alcool)));
            }
        }

        else if(_arquivo == "fruta.bat"){
            std::string _data, _validade;
            m_estoque.clear();
            while(!arquivo.eof()){
                std::getline(arquivo, _codigo, ';');
                std::getline(arquivo, _descricao, ';');
                std::getline(arquivo, _preco, ';');
                std::getline(arquivo, _data, ';');
                std::getline(arquivo, _validade, ';');

                addProduto(std::make_shared<Fruta>(_codigo, _descricao, std::stod(_preco), 
                        _data, std::stoi(_validade)));
            }
        }

        else if(_arquivo == "roupa.bat"){
            std::string _marca, _sexo, _tamanho;
            m_estoque.clear();
            while(!arquivo.eof()){
                std::getline(arquivo, _codigo, ';');
                std::getline(arquivo, _descricao, ';');
                std::getline(arquivo, _preco, ';');
                std::getline(arquivo, _marca, ';');
                std::getline(arquivo, _sexo, ';');
                std::getline(arquivo, _tamanho, ';');

                addProduto(std::make_shared<Roupa>(_codigo, _descricao, std::stod(_preco), 
                        _marca, _sexo, _tamanho));
            }
        }

        else{
            std::cout << "O tipo de produto não existe." << std::endl;
            exit(1);
        }
    }
}
