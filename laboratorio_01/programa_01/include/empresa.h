#ifndef EMPRESA_H
#define EMPRESA_H

#include <vector>
#include "funcionario.h"


class Empresa
{
private:
    std::string m_nome_empresa;
    unsigned int m_cnpj;
    std::vector <Funcionario *> m_funcionarios_empresa;
    int *m_numero_funcionario;

public:
    Empresa(std::string, unsigned int);
    Empresa();
    ~Empresa();

    std::string getNomeEmpresa();
    unsigned int getCnpj();

    void addEmpresa(std::string, unsigned int);

    void removeFuncionario(std::string);
};

#endif
