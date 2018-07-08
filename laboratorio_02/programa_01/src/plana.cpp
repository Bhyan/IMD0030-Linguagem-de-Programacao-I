#include "plana.h"
#include <cmath>

#define PI 3.14159265358979323846

/*
 * @brief Construtor da classe plana.
 * @param O construtor pode receber de um a três parâmetros, são eles base,
 * altura e lado. No caso de receber apenas um, os dois últimos valores são 
 * instanciados com valores zero.
 */
Plana::Plana(double base_, double altura_, double lado_):m_base(base_), m_altura(altura_), m_lado(lado_) {}

Plana::~Plana() {}

/*
 * @brief Função para cálculo da área de um triângulo equilátero.
 * @param A função não recebe parâmetros.
 * @return Área de um triângulo equilátero.
 */
double
Plana::areaTriangulo(){
   return (m_base * m_altura) / 2;
}

/*
 * @brief Função para cálculo da perímetro de um triângulo equilátero.
 * @param A função não recebe parâmetros.
 * @return Perímetro de um triângulo equilátero.
 */
double
Plana::perimetroTriangulo(){
    return m_base + m_altura + m_lado;
}

/*
 * @brief Função para cálculo da área de um retângulo.
 * @param A função não recebe parâmetros.
 * @return Área de um retângulo.
 */
double
Plana::areaRetangulo(){
    return m_base * m_altura;
}

/*
 * @brief Função para cálculo da perímetro de um retângulo.
 * @param A função não recebe parâmetros.
 * @return Perímetro de um retângulo.
 */
double
Plana::perimetroRetangulo(){
    return 2 * (m_base + m_altura);
}

/*
 * @brief Função para cálculo da área de um quadrado.
 * @param A função não recebe parâmetros.
 * @return Área de um quadrado.
 */
double
Plana::areaQuadrado(){
    return pow(m_base, 2);
}

/*
 * @brief Função para cálculo da perímetro de um quadrado.
 * @param A função não recebe parâmetros.
 * @return Perímetro de um quadrado.
 */
double
Plana::perimetroQuadrado(){
    return 4 * m_base;
}

/*
 * @brief Função para cálculo da área de um circulo.
 * @param A função não recebe parâmetros.
 * @return Área de um circulo.
 */
double
Plana::areaCirculo(){
    return PI * pow(m_base, 2);
}

/*
 * @brief Função para cálculo da perímetro de um circulo.
 * @param A função não recebe parâmetros.
 * @return Perímetro de um circulo.
 */
double
Plana::perimetroCirculo(){
    return 2 * PI * m_base;
}
