#include <cmath>
#include "espacial.h"

#define PI 3.14159265358979323846

/*
 * @brief Construtor da classe espacial.
 * @param O construtor pode receber de um a três parâmetros, são eles base,
 * altura e aresta. No caso de receber apenas um, os dois últimos valores são 
 * instanciados com valores zero.
 */
Espacial::Espacial(double base_, double altura_, double aresta_):m_base(base_), m_altura(altura_), m_aresta(aresta_) {}

Espacial::~Espacial() {}

/*
 * @brief Função para cálculo da área de uma pirâmide.
 * @param A função não recebe parâmetros.
 * @return Área de uma pirâmide.
 */
double
Espacial::areaPiramide(){
    return m_base + 4 * m_aresta;
}

/*
 * @brief Função para cálculo do volume de uma pirâmide.
 * @param A função não recebe parâmetros.
 * @return Volume de uma pirâmide.
 */
double
Espacial::volumePiramide(){
    return (m_base * m_altura) / 3;
}

/*
 * @brief Função para cálculo da área de um cubo.
 * @param A função não recebe parâmetros.
 * @return Área de um cubo.
 */
double
Espacial::areaCubo(){
    return 6 * pow(m_base, 2);
}

/*
 * @brief Função para cálculo do volume de um cubo.
 * @param A função não recebe parâmetros.
 * @return Volume de um cubo.
 */
double
Espacial::volumeCubo(){
    return pow(m_base, 3);
}

/*
 * @brief Função para cálculo da área de um paralelepípedo.
 * @param A função não recebe parâmetros.
 * @return Área de um paralelepípedo.
 */
double
Espacial::areaParalelepipedo(){
    return (2 * m_base * m_altura) + (2 * m_base * m_aresta) + (2 * m_altura * m_aresta);
}

/*
 * @brief Função para cálculo do volume de um paralelepípedo.
 * @param A função não recebe parâmetros.
 * @return Volume de um paralelepípedo.
 */
double
Espacial::volumeParalelepipedo(){
    return m_base * m_altura * m_aresta;
}

/*
 * @brief Função para cálculo da área de uma esfera.
 * @param A função não recebe parâmetros.
 * @return Área de uma esfera.
 */
double
Espacial::areaEsfera(){
    return 4 * PI * pow(m_base, 2);
}

/*
 * @brief Função para cálculo do volume de uma esfera.
 * @param A função não recebe parâmetros.
 * @return Volume de uma esfera.
 */
double
Espacial::volumeEsfera(){
    return (4 * PI * pow(m_base, 3)) / 3;
}
