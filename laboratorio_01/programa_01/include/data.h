#ifndef DATA_H
#define DATA_H

#include <iostream>


class Data
{
private:
    int m_dia;
    int m_mes;
    int m_ano;

public:
    Data();
    ~Data();

    friend std::istream& operator>> (std::istream &i, Data &d);

    int calculo_dias(int, int, int);

    enum dias_mes
    {
        janeiro = 31,
        fevereiro = 28,
        marco = 31,
        abril = 30,
        maio = 31,
        junho = 30,
        julho = 31,
        agosto = 31,
        setembro = 30,
        outubro = 31,
        novembro = 30,
        dezembro = 31
    };
};

#endif
