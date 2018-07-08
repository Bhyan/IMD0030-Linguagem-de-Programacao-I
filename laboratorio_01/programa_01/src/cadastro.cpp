#include "cadastro.h"


Cadastro::Cadastro(){}

Cadastro::~Cadastro(){}

void
Cadastro::menu(){
    int opcao;

    do{
        std::cout << "============= Menu =============" << std::endl
        << "Opção 1 - Cadastro de empresa. "            << std::endl
        << "Opção 2 - Lista empresa. "                  << std::endl
        << "Opção 3 - Sair. "                           << std::endl;
        std::cin >> opcao;

        switch(opcao){
            case 1:
                cadastro_empresa();
                break;
        }

    }while(opcao != 3);
}

void
Cadastro::cadastro_empresa(){
    std::string nome;
    unsigned int cnpj;

    std::cout << "Digite o nome da empresa: ";
    std::cin >> nome;
    std::cout << std::endl << "Digite o CNPJ: ";
    std::cin >> cnpj;
    std::cout << std::endl;

    m_empresa.push_back(new Empresa(nome, cnpj));

    cadastro_funcionario();
}

void
Cadastro::cadastro_funcionario(){
    std::string nome_funcionario;
    double salario_funcionario;
    Data data_hoje;
    int opcao;

    do{
        std::cout << "============= Menu Funcionário ============="  << std::endl
        << "Opção 1: Cadastrar um novo funcionário."                 << std::endl
        << "Opção 2: Excluir um funcionário."                        << std::endl
        << "Opção 3: Lista funcionários em período de experiencia. " << std::endl
        << "Opção 4: Sair."                                          << std::endl;
        std::cin >> opcao;

        switch(opcao){
            case 1:
                std::cout << "Nome funcionário: ";
                std::cin >> nome_funcionario;
                std::cout << std::endl << "Salario do funcionário: ";
                std::cin >> salario_funcionario;
                std::cout << "Data de contratação: ";
                std::cin >> data_hoje;
                Funcionario(nome_funcionario, salario_funcionario, data_hoje);
                break;
            case 2:
                std::cout << "Digite o nome do funcionário: ";
                std::cin >> nome_funcionario;
                std::cout << std::endl;
                excluirFuncionario(nome_funcionario);
                break;
            case 3:
                std::cout << "Digite a data de hoje: ";
                std::cin >> data_hoje;
                listarFuncionarios(data_hoje);
                break;
        }

    }while(opcao != 4);

}
