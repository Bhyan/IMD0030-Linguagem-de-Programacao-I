/**
 * @file roupa.h
 * @brief Protótipo da classe Roupa.
 * @author Bryan Brito
*/

#ifndef _ROUPA_H_
#define _ROUPA_H_

#include "produto.h"


class Roupa : public Produto{
    private:
        std::string m_marca;
        std::string m_sexo;
        std::string m_tamanho;

    public:
        Roupa();
        Roupa(std::string _codigo, std::string _descricao, double _preco, 
                std::string _marca, std::string _sexo, std::string _tamanho);
        ~Roupa();

        std::string getMarca();
        std::string getSexo();
        std::string getTamanho();

        void setMarca(std::string _marca);
        void setSexo(std::string _sexo);
        void setTamanho(std::string _tamanho);

    private:
        std::ostream& print(std::ostream &o) const;
};

#endif
