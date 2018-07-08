/*
 * @file main.cpp
 * @author Bryan Brito.
*/
#include <set>
using std::set;

#include "t_container.h"


int main(){
    set<int> numeros;

    numeros.insert(3);
    numeros.insert(1);
    numeros.insert(4);
    numeros.insert(1);
    numeros.insert(2);
    numeros.insert(5);

    print_elementos(numeros, "Set: ");
    print_elementos(numeros, "CSV Set: ", ';');
    
    return 0;
}
