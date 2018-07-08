/*
 * @file t_container.h
 * @author Bryan Brito.
*/
#ifndef T_CONTAINER_H
#define T_CONTAINER_H

#include <iostream>

/*
 * @brief A função imprime os valores da coleção, com o label informado e o separator.
 * @param Collection do template TContainer.
 * @param Label, do tipo char.
 * @param Separator, do tipo char.
*/
template<typename TContainer>
void print_elementos(const TContainer& collection, const char* label="", const char separator=' '){

    std::cout << label;

    for(auto it = collection.begin(); it != --collection.end(); it ++){
        std::cout << *it << separator;
    }

    std::cout << *collection.end() << std::endl;

}

#endif
