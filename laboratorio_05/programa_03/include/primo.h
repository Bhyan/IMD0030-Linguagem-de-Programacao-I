/*
 * @file primo.h
 * @author Bryan Brito.
*/
#ifndef PRIMO_H
#define PRIMO_H

#include <cmath>
#include <numeric>
#include <algorithm>
#include <iostream>
#include <memory>
#include <vector>


class Primo{
    public:
        Primo();
        ~Primo();
        bool operator()(int m_primo) const;
        void print(int m_numero);

};

#endif
