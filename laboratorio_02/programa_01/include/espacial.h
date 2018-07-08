#ifndef ESPACIAL_H
#define ESPACIAL_H


/*
 * @file espacial.h
 * @author Bryan Brito.
 * @brief Classe onde são realizados os cálculos relacionados a geometria espacial.
 * @details A classe espacial engloba os cálculos relacionados a área e volume das figuras geométricas
 * pirâmide, cubo, paralelepípedo e esfera. As variáveis que armazena os atributos da classe são definidos como
 * double. Para o cálculo da área é volume do cubo e esfera, só existe a necessidade de um atributo, 
 * assim os valores de m_altura e m_aresta são instanciados como 0 por padrão.
 */
class Espacial
{
    private:
        double m_base;
        double m_altura;
        double m_aresta;

    public:
        Espacial(double base_, double altura_ = 0, double aresta_ = 0);
        ~Espacial();

        double areaPiramide();
        double volumePiramide();

        double areaCubo();
        double volumeCubo();

        double areaParalelepipedo();
        double volumeParalelepipedo();

        double areaEsfera();
        double volumeEsfera();

};

#endif
