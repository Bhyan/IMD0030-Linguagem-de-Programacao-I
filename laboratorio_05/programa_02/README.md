# Questão 02

Implemente uma função template print_elements que receba como parâmetros um container
qualquer seguido de um label e um separador a serem usados na impressão de todos os elementos
do container. Tal função deverá conterá a seguinte assinatura:

```
template<typename TContainer>
void print_elements(const TContainer& collection, const char* label="", const char separator=' ');
```

**Um exemplo de utilização dessa função seria conforme mostrado no trecho de código a seguir:**

```
#include <set>
using std::set;

int main(){
  set<int> numeros;
  numeros.insert(3);
  numeros.insert(1);
  numeros.insert(4);
  numeros.insert(1);
  numeros.insert(2);
  numeros.insert(5);

  print_elementos(numeros, "Set: ");
  print_elementos(numeros, "CSV Set: ", ';');
  return 0;
}

```

**Um exemplo de execução desse programa seria:***

```
$ ./print
Set: 1 2 3 4 5
CSV Set: 1;2;3;4;5
```
