# Questão 01

Implemente uma função template closest2mean que receba como parâmetro um intervalo
especificado por dois iteradores da categoria InputIterator e retorne um iterador para o
elemento nesse intervalo cujo valor é o mais próximo da média do intervalo. Tal função deverá ter
obrigatoriamente a seguinte assinatura:

```
template<typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last);

```

**Um exemplo de utilização dessa função seria conforme mostrado no trecho de código a seguir:**

```
#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main(){
  vector<int> v { 1, 2, 3, 30, 40, 50 };
  auto result = closest2mean(v.begin(), v.end());
  cout << (*result) << endl;
  return 0;
}
```

Como a média dos valores inteiros contidos no intervalo considerado (do início ao fim do vetor v) é
21, logo o programa imprime o valor 30 na saída padrão, referindo-se ao elemento mais próximo
dessa média. Pesquise e utilize os algoritmos disponíveis na STL a fim de reduzir o seu código ao
máximo.
