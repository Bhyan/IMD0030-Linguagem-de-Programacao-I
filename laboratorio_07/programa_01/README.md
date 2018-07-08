Questão 01
==========

Crie uma hierarquia de classes de domínio para uma loja que vende os seguintes Produtos: Roupa,
Bebida e Fruta. Sobrescreva o operador de inserção em stream “<<” para cada classe, de modo que
o uso do mesmo imprima:

* Para Roupa: código de barras, descrição, preço, marca, sexo (M/F) e tamanho.
* Para Bebida: código de barras, descrição, preço e teor alcoólico (em %).
* Para Fruta: código de barras, descrição, preço, data do lote e validade.

Sobrescreva os operadores de adição “+” e subtração “-“ de modo a permitir somar e subtrair o preço
de dois produtos. Sobrescreva também o operador de igualdade “==” retornando true se dois
produtos possuem o mesmo código de barras ou false em caso contrário.

Evite repetição de código. Explore, ao máximo, os conceitos de Programação Orientada a Objetos
(POO) em C++ discutidos em sala de aula: classes, métodos, métodos de acesso (getters/setters),
modificadores de acesso, sobrecarga de operadores, herança, polimorfismo, método virtual, classe
abstrata, templates, entre outros.

Realize testes sobre as classes implementadas para mostrar o correto funcionamento de sua
implementação. A carga dos produtos na lista de produtos deve ser realizada a partir dos arquivos
.dat correspondentes.

**SUPRESA!!!** Ainda envergonhado pela situação em que te colocou na última avaliação, Teobaldo
resolveu voltar para te ajudar. Para isso, dentro de seu tempo disponível, ele te enviou um código
inicial, disponível através do [endereço](https://github.com/imdcode/teobaldo.git) e descreveu o que
deve ser feito no arquivo README.md.
