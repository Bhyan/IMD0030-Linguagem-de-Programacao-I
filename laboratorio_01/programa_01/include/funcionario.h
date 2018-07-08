#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "data.h"


class Funcionario
{
private:
    std::string m_nome;
    double m_salario;
    Data m_contratacao;

public:
    Funcionario(std::string, double, Data);
    ~Funcionario();

    std::string getNome();

    double getSalario();
    void setSalario(double);

    Data getContratacao();

    static void excluirFuncionario(std::string);

    static void listarFuncionarios(Data);
};

#endif
