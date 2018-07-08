#include <iostream>
#include "plana.h"
#include "espacial.h"

/*
 * @file geometria.cpp
 * @author Bryan Brito.
 * @brief Toda o tratamento de possíveis erros e argumentos são feitos na main.
 */
int main(int argc, char *argv[]){
    std::string geometria;

    /* <Checagem da quantidade de argumentos de entrada, para argc igual a dois, mostra que só foi
     * passado a forma geométrica, e não seus dados, o que acarretaria em erro no momento da
     * instanciação do objeto da classe plana ou espacial.
     */
    if(argc <= 2){
        std::cout << "Entrada invalida. " << std::endl
        << "Para executar o programa, informe a estrutura desejada é seus respectivos dados." << std::endl
        << "As seguintes formas geométricas são aceitas como entrada para cálculo: " << std::endl
        << "Planas (área é perímetro): Triângulo - Retângulo - Quadrado - Círculo " << std::endl
        << "Espaciais (área é volume): Pirâmide - Cubo - Paralelepípedo - Esfera " << std::endl
        << "Exemplo: geometria quadrado 4" << std::endl;

        return -1;
    }

    geometria = argv[1];

    if(geometria.compare("triangulo") == 0){
        Plana geoP(atoi(argv[2]), atoi(argv[3]), atoi(argv[4]));

        std::cout << "Área do triângulo: " << geoP.areaTriangulo() << std::endl;
        std::cout << "Perímetro do triângulo: " << geoP.perimetroTriangulo() << std::endl;
    }
    else if(geometria.compare("retangulo") == 0){
        Plana geoP(atoi(argv[2]), atoi(argv[3]));

        std::cout << "Área do retângulo: " << geoP.areaRetangulo() << std::endl;
        std::cout << "Perímetro do retângulo: " << geoP.perimetroRetangulo() << std::endl;
    }
    else if(geometria.compare("quadrado") == 0){
        Plana geoP(atoi(argv[2]));

        std::cout << "Área do quadrado: " << geoP.areaQuadrado() << std::endl;
        std::cout << "Perímetro do quadrado: " << geoP.perimetroQuadrado() << std::endl;
    }
    else if(geometria.compare("circulo") == 0){
        Plana geoP(atoi(argv[2]));

        std::cout << "Área do círculo: " << geoP.areaCirculo() << std::endl;
        std::cout << "Perímetro do círculo: " << geoP.perimetroCirculo() << std::endl;
    }
    /* < Para o cálculo da piramide é reutilizado os cálculos da biblioteca plana.
     * A base da piramide e um quadrado e suas fases triângulos.
     */
    else if(geometria.compare("piramide") == 0){
        Plana geoP(atoi(argv[2]), atoi(argv[3]));
        Espacial geoE(geoP.areaQuadrado(), atoi(argv[3]), geoP.areaTriangulo());

        std::cout << "Área do pirâmide: " << geoE.areaPiramide() << std::endl;
        std::cout << "Volume do pirâmide: " << geoE.volumePiramide() << std::endl;
    }
    else if(geometria.compare("cubo") == 0){
        Espacial geoE(atoi(argv[2]));

        std::cout << "Área do cubo: " << geoE.areaCubo() << std::endl;
        std::cout << "Perímetro do cubo: " << geoE.volumeCubo() << std::endl;
    }
    else if(geometria.compare("paralelepipedo") == 0){
        Espacial geoE(atoi(argv[2]), atoi(argv[3]), atoi(argv[4]));

        std::cout << "Área do paralelepípedo: " << geoE.areaParalelepipedo() << std::endl;
        std::cout << "Perímetro do paralelepípedo: " << geoE.volumeParalelepipedo() << std::endl;
    }
    else if(geometria.compare("esfera") == 0){
        Espacial geoE(atoi(argv[2]));

        std::cout << "Área do esfera: " << geoE.areaEsfera() << std::endl;
        std::cout << "Perímetro do esfera: " << geoE.volumeEsfera() << std::endl;
    }
    else{
        std::cout << "Figura geométrica invalida." << std::endl;
    }

    return 0;
}
