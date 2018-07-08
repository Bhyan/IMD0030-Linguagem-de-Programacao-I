#include <iostream>
#include <vector>
#include <memory>
#include "produto.h"
#include "fruta.h"
#include "roupa.h"
#include "bebida.h"
#include "estoque.h"


using namespace std;

int main(int argc, char const *argv[]){
    Estoque estoque;

    cout << "Leitura e impressão do estoque." << endl;
    cout << endl << "Bebidas: " << endl;
    estoque.lerArquivo("bebida.bat");
    estoque.imprimirEstoque();
    cout << endl << "Frutas: " << endl;
    estoque.lerArquivo("fruta.bat");
    estoque.imprimirEstoque();
    cout << endl << "Roupas: " << endl;
    estoque.lerArquivo("roupa.bat");
    estoque.imprimirEstoque();

    auto aux = estoque.getEstoque();

    cout << endl << "Soma dos valores dos produtos: " << endl << *aux[0] << *aux[1] << endl;
    cout << *aux[0] + *aux[1] << endl << endl;
    cout << "Subtração dos valores dos produtos: " << endl << *aux[0] << *aux[1] << endl;
    cout << *aux[0] - *aux[1] << endl;

	return 0;
}
