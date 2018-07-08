#ifndef FC_H
#define FC_H

#include <memory>
#include <iostream>
#include "listaCircular.h"


template <typename T>
class FilaCircular : public ListaLigada {
private:
	ListaCircular<T> lista;
public: 
	FilaCircular();
	~FilaCircular();
	bool Inserir(T _valor);
	bool Remover();
	bool vazia();
	int size();

	friend std::ostream& operator<< <T>( std::ostream&, FilaCircular<T> const &l);
};

template <typename T>
FilaCircular<T>::FilaCircular(): cabeca(nullptr), tamanho(0) {}

template <typename T>
FilaCircular<T>::~FilaCircular() {
    while(this -> cabeca -> getNext() != cabeca){

}

template <typename T>
bool FilaCircular<T>::Inserir(T _valor) {
	if(lista.InsereNoFinal(_valor))
		return true;
	else
		return false;
}

template <typename T>
bool FilaCircular<T>::Remover() {
	if(lista.RemoveNoInicio()){
		return true;
	}
		
	else
		return false;
}

template <typename T>
bool FilaCircular<T>::vazia() {
	return lista.vazia();
}

template <typename T>
int FilaCircular<T>::size() {
	return lista.size();
}

template <typename T>
std::ostream& operator<< ( std::ostream& o, FilaCircular<T> const &l) {
	o << l.lista;

	return o;
}

#endif
