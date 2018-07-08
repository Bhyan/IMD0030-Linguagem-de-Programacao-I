/**
 * @file bebida.h
 * @brief Protótipo da classe Bebida.
 * @author Bryan Brito
*/

#ifndef _BEBIDA_H_
#define _BEBIDA_H_

#include "produto.h"


class Bebida : public Produto{
    private:
        int m_teor_alcool;

    public:
        Bebida();
        Bebida(std::string _codigo, std::string _descricao, double _preco, int _teor_alcool);
        ~Bebida();

        int getTeorAlcool();

        void setTeorAlcool(int _teor_alcool);

    private:
        std::ostream& print(std::ostream &o) const;
};

#endif
