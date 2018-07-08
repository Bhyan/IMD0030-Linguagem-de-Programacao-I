/**
 * @file estoque.h
 * @brief Protótipo da classe Estoque.
 * @author Bryan Brito
*/

#ifndef _ESTOQUE_H_
#define _ESTOQUE_H_


#include <vector>
#include <memory>
#include "produto.h"


class Estoque{
    private:
        std::vector<std::shared_ptr<Produto>> m_estoque;

    public:
        Estoque();
        ~Estoque();

        std::vector<std::shared_ptr<Produto>> getEstoque();
      	void addProduto(std::shared_ptr<Produto> _produto);
        void imprimirEstoque();
        void lerArquivo(std::string _arquivo);

};

#endif
