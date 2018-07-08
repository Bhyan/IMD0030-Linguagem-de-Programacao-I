#ifndef PLANA_H
#define PLANA_H


/*
 * @file plana.h
 * @author Bryan Brito.
 * @brief Classe onde são realizados os cálculos relacionados a geometria plana.
 * @details A classe plana engloba os cálculos relacionados a área e perímetro das figuras geométricas
 * triângulo equilátero, retângulo, quadrado e círculo. As variáveis que armazena os atributos da classe são definidos como
 * double. Para o cálculo da área é perímetro do quadrado, só existe a necessidade
 * de um atributo, assim os valores de m_altura e m_lado são instanciados como 0 por padrão, o mesmo vale para o cálculo do
 * perímetro do triângulo.
 */
class Plana
{
    private:
        double m_base;
        double m_altura;
        double m_lado;

    public:
        Plana(double base_, double altura_ = 0, double lado_ = 0);
        ~Plana();

        double areaTriangulo();
        double perimetroTriangulo();

        double areaRetangulo();
        double perimetroRetangulo();

        double areaQuadrado();
        double perimetroQuadrado();

        double areaCirculo();
        double perimetroCirculo();

};

#endif
