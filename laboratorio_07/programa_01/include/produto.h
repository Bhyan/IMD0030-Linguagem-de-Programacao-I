/**
 * @file produto.h
 * @brief Protótipo da classe mãe Produto.
 * @author Bryan Brito
*/

#ifndef _PRODUTO_H_
#define _PRODUTO_H_

#include <iostream>

class Produto{
    public:
        Produto();
        Produto(std::string _codigo, std::string _descricao, double _preco);
        virtual ~Produto();

    protected:
        std::string m_cod_barras;
        std::string m_descricao;
        double m_preco;		

    public:
        std::string getCodBarras();
        std::string getDescricao();
        double getPreco();

        void setCodBarras(std::string _codigo);
        void setDescricao(std::string _descricao);
        void setPreco(double _preco);

        friend std::ostream& operator<< (std::ostream &o, Produto const &t);  
        bool operator== (Produto &_produto);
        bool operator!= (Produto &_produto);
        double operator+ (Produto &_produto);
        double operator- (Produto &_produto);

    private:
        virtual std::ostream& print(std::ostream&) const = 0;
};
 
#endif
