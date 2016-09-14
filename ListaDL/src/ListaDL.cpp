/* ListaDL.cpp

Sánchez Neri David Yaxkin

Definición de los métodos de la clase ListaDL
para la implementación de la estructura de datos de tipo lista doblemente ligada.
*/

#include "ListaDL.h"

ListaDL::ListaDL() {
	this->H = NULL;
	this->T = NULL;
	this->numNodos = 0;
}

bool ListaDL::listaDLVacia() {
	if(this->H == NULL && this->T == NULL)
		return true;
	return false;
}

void ListaDL::addInicio(int dato) {
	Nodo* aux = new Nodo(dato);
	if(listaDLVacia()) {
		this->T = aux;
	}
	else {
		aux->setSiguiente(this->H);
		this->H->setAnterior(aux);
	}
	this->H = aux;
	numNodos++;
}

void ListaDL::addFinal(int dato) {
	Nodo* aux = new Nodo(dato);
	if(listaDLVacia()) {
		this->H = aux;
	}
	else {
		aux->setAnterior(this->T);
		this->T->setSiguiente(aux);
	}
	this->T = aux;
	numNodos++;
}

void ListaDL::addRef(int dato, int Ref) {
	if (Ref > numNodos || Ref < 1) {
		return;
	}
	Nodo* aux =  new Nodo(dato);
	if(listaDLVacia()) {
		this->H = aux;
		this->T = aux;
	}
	else {
		Nodo* scout = this->H;
		//scout apunta al lugar al que debe apuntar aux para poder realizar la asignación de aux.
		for(int i = 1; i < Ref-1; i++) {
			scout = scout->getSiguiente();
		}
		aux->setSiguiente(scout->getSiguiente());
		aux->setAnterior(scout);
		scout->setSiguiente(aux);
		scout = scout->getSiguiente();
		scout = scout->getSiguiente();
		scout->setAnterior(aux);				
	}
	numNodos++;
}

int ListaDL::removeInicio() {
	if(listaDLVacia()) {
		return (int)NULL;
	}
	//Si la lista solo tiene un nodo.
	Nodo* aux = this->H;
	if(this->H == this->T) {
		this->H = NULL;
		this->T = NULL;
	}
	else {
		this->H = this->H->getSiguiente();
		this->H->setAnterior(NULL);
		aux->setSiguiente(NULL);
	}
	numNodos--;
	return aux->getDato();
}

int ListaDL::removeFinal() {
	if(listaDLVacia()) {
		return (int)NULL;
	}
	//Si la lista solo tiene un nodo.
	Nodo* aux = this->T;
	if(this->H == this->T) {
		this->H = NULL;
		this->T = NULL;
	}
	else {
		this->T = this->T->getAnterior();
		this->T->setSiguiente(NULL);
		aux->setAnterior(NULL);
	}
	numNodos--;
	return aux->getDato();
}

int ListaDL::removeRef(int Ref) {
	if (Ref > numNodos || Ref < 1) {
		return (int)NULL;
	}
	if(listaDLVacia()) {
		return (int)NULL;
	}

	Nodo* aux = this->H;
	//Si la lista solo tiene un nodo.
	if(this->H == this->T) {
		this->H = NULL;
		this->T = NULL;
		numNodos--;
		return aux->getDato();
	}

	else {
		Nodo* scout = this->H;
		//scout apunta al lugar al que debe apuntar aux para poder realizar la asignación del siguiente de aux.
		for(int i = 1; i < Ref; i++) {
			scout = scout->getSiguiente();
		}
		//Se recorre aux hasta llegar a uno antes de scout para después asignarlo al siguiente de éste.
		for(int i = 1; i < Ref-1; i++) {
			aux = aux->getSiguiente();
		}
		aux->setSiguiente(scout->getSiguiente());
		aux = aux->getSiguiente();
		aux->setAnterior(scout->getAnterior());
		scout->setAnterior(NULL);
		scout->setSiguiente(NULL);
		numNodos--;
		return scout->getDato();
	}
	
}

void ListaDL::vaciarListaDL() {
	while(numNodos != 0) {
		removeFinal();
	}
}

Nodo* ListaDL::buscarElemento(int dato) {
	Nodo* aux = this->H;
	if(listaDLVacia()) {
		return NULL;
	}
	int i = 1, posicion = 1;
	//Busca el dato en la lista y obtiene su posición (referencia) para después obtener el apuntador.
	while(aux->getDato() != dato) {
		aux = aux->getSiguiente();
		if(aux->getSiguiente() == NULL) {
			return NULL;
		}
		i ++;
	}
	posicion = i;
	aux = this->H;
	i = 1;
	//Recorre la lista para obtener el apuntador al nodo con el dato.
	while(i < posicion) {
		aux = aux->getSiguiente();
		i++;
	}
	
	return aux;
}

void ListaDL::show() {
	Nodo* aux = this->H;
	int i = 1;
	std::cout<<"Contenido de la Lista DL"<<std::endl;
	while(aux != NULL) {
		std::cout<<"Nodo: "<<i<<" Dato: "<<aux->getDato()<<std::endl;
		aux = aux->getSiguiente();
		i++;
	}
}
