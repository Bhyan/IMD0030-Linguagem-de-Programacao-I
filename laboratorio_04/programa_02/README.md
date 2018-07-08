# Programa 2 (0,50)

Escreva um programa, utilizando a TAD Pilha (a mesma usada na questão anterior), que permita avaliar uma
dada expressão em notação polonesa inversa. Notação Polonesa Inversa (ou RPN na sigla em inglês, de
Reverse Polish Notation), também conhecida como notação pós-fixada, foi inventada pelo filósofo e cientista
da computação australiano Charles Hamblin em meados dos anos 1950, para habilitar armazenamento de
memória de endereço zero. Ela deriva da notação polonesa, introduzida em 1920 pelo matemático polonês Jan
Łukasiewicz. (Wikipedia).

**Exemplos de expressões para testes:**

* Expressão: 2 3 + 5 * Resultado: 25 Infixa: (2 + 3) * 5
* Expressão: 4 2 / 8 + 6 * Resultado: 60 Infixa: ((4 / 2) + 8 ) * 6
* Expressão: 5 3 * 2 * 10 / Resultado: 3 Infixa: ((5 * 3) * 2) / 10

**Dica:** Utilize as características da estrutura de dados Pilha para facilitar a resolução do problema.
Por razões de simplicidade, assuma que os operandos e operadores serão digitados sempre com um espaço
entre eles. Utilize a implementação de [Pilha fornecida por Teobaldo](https://github.com/imdcode/teobaldo_tad.)
