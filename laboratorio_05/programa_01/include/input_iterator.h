/*
 * @file input_iterator.h
 * @author Bryan Brito.
*/
#ifndef INPUT_ITERATOR_H
#define INPUT_ITERATOR_H

#include <numeric>

/*
 * @brief Função percorre um container, retira a média dos valores, e retorna o valor do container
 * mais proxímo da média.
 * @param Inicio e fim do container;
 * @return Valor do container mais proxímo da media dos seus valores.
*/
template<typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last){
    int media = accumulate(first, last, 0) / (distance(first, last));

	InputIterator resultado = first;

	for(auto it = first; it != last; it ++){
		if(abs(media - (*it)) < abs(media - *resultado ))
			resultado = it;
	}
	return resultado;
}

#endif
