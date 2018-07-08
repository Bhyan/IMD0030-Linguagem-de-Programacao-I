# Questão 03

Predicado é outro conceito importante e muito empregado na STL. Predicados são funções que
retornam um valor booleano e são normalmente usadas em critérios de busca ou ordenação. Um
predicado sempre retorna o mesmo resultado para o mesmo valor. Predicados podem ser
implementados como funções booleanas ou functors.

Fazendo uso de uma functor, implemente um programa que, dado um container de inteiros, encontre
o primeiro número primo do conjunto. Utilize esta função para imprimir todos os valores primos no
container. Em outras palavras, o programa deverá ler um valor N fornecido como entrada via linha
de comando e imprimir todos os valores primos de 1 a N. Você deverá utilizar o algoritmo find_if
disponível na STL para encontrar o próximo número primo.

**Um exemplo de execução do programa seria:**

```
$ ./showprimos 50
$ Numeros primos [1-50]: 1 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
```
