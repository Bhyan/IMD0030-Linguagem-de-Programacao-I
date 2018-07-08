#include "data.h"

Data::Data(){}

Data::~Data(){}

std::istream& operator>> (std::istream &i, Data &d){
    i >> d.m_dia >> d.m_mes >> d.m_ano;
    return i;
}

int
Data::calculo_dias(int ano_, int mes_, int dia_){
    

    return 0;
}
