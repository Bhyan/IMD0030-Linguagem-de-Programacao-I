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
    estoque.lerArquivo("bebida.bat");
    estoque.lerArquivo("fruta.bat");
    estoque.lerArquivo("roupa.bat");
    estoque.imprimirEstoque();

	return 0;
}
