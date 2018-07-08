#ifndef CADASTRO_H
#define CADASTRO_H

#include "empresa.h"


class Cadastro
{
private:
    std::vector <Empresa *> m_empresa;

public:
    Cadastro();
    ~Cadastro();

    void menu();
    void cadastro_empresa();
    void cadastro_funcionario();
};

#endif
