/**
 * @file fruta.h
 * @brief Protótipo da classe Fruta.
 * @author Bryan Brito
*/

#ifndef _FRUTA_H_
#define _FRUTA_H_

#include "produto.h"

class Fruta : public Produto{
    private:
        std::string m_data_lote;
        int m_validade;

    public:
        Fruta();
        Fruta(std::string _codigo, std::string _descricao, double _preco,
                std::string _data, int _validade);
        ~Fruta();

    public:
        std::string getDataLote();
        int getValidade();
        void setDataLote(std::string _data);
        void setValidade(int _validade);

    private:
        std::ostream& print(std::ostream &o) const;
};

#endif
