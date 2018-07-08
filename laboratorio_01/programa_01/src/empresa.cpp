#include "empresa.h"


Empresa::Empresa(std::string nome_empresa, unsigned int cnpj){
    m_nome_empresa = nome_empresa;
    m_cnpj = cnpj;
}

Empresa::Empresa(){}

Empresa::~Empresa(){}

std::string
Empresa::getNomeEmpresa(){
    return m_nome_empresa;
}

unsigned int
Empresa::getCnpj(){
    return m_cnpj;
}
