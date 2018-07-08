#include "funcionario.h"
#include "data.h"


Funcionario::Funcionario(std::string nome_, double salario_, Data contratacao_):
    m_nome(nome_), m_salario(salario_), m_contratacao(contratacao_) {}

Funcionario::~Funcionario(){}

std::string
Funcionario::getNome(){
    return m_nome;
}

double
Funcionario::getSalario(){
    return m_salario;
}

void
Funcionario::setSalario(double salario){
    m_salario = salario;
}

Data
Funcionario::getContratacao(){
    return m_contratacao;
}

void
Funcionario::excluirFuncionario(std::string nome_funcionario){

}

void
Funcionario::listarFuncionarios(Data data_hoje){

}
