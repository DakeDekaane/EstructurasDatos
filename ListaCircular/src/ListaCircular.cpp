/* ListaCircular.cpp

Sánchez Neri David Yaxkin

Definición de los métodos de la clase ListaCircular
para la implementación de la estructura de datos de tipo lista circular.
*/

#include "ListaCircular.h"

ListaCircular::ListaCircular() {
	this->H = NULL;
	this->T = NULL;
	this->numNodos=0;
}

bool ListaCircular::listaVacia() {
	if(this->H == NULL && this->T == NULL)
		return true;
	return false;
}

void ListaCircular::addInicio(int dato) {
	Nodo* aux = new Nodo(dato);
	if(listaVacia()) {
		this->T = aux;
		this->H = aux;
		aux->setSiguiente(aux);
	}
	else {
		this->T->setSiguiente(aux);
		aux->setSiguiente(H);
		this->H = aux;	
	}
	this->numNodos++;
}

void ListaCircular::addFinal(int dato) {
	Nodo* aux = new Nodo(dato);
	if(listaVacia()) {
		this->T = aux;
		this->H = aux;
		this->T->setSiguiente(aux);
	}
	else {
		this->T->setSiguiente(aux);
		aux->setSiguiente(H);
		this->T = aux;	
	}
	this->numNodos++;
}

void ListaCircular::addRef(int dato, int Ref) {
	if (Ref > numNodos || Ref < 1) {
		return;
	}
	Nodo* aux =  new Nodo(dato);
	if(listaVacia()) {
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
		scout->setSiguiente(aux);			
	}
	this->numNodos++;
}

int ListaCircular::removeInicio() {
	if(listaVacia()) {
		return (int)NULL;
	}
	//Si la lista solo tiene un nodo.
	Nodo* aux = this->H;
	if(this->H == this->T) {
		this->H = NULL;
		this->T = NULL;
	}
	else {
		this->T->setSiguiente(this->H->getSiguiente());
		this->H = H->getSiguiente();
	}
	aux->setSiguiente(NULL);
	this->numNodos--;
	return aux->getDato();
}

int ListaCircular::removeFinal() {
	if(listaVacia()) {
		return (int)NULL;
	}
	//Si la lista solo tiene un nodo.
	Nodo* aux = this->H;
	int dato = this->T->getDato();
	if(this->H == this->T) {
		this->H = NULL;
		this->T = NULL;
	}
	else {
		while(aux->getSiguiente() != this->T) {
			aux = aux->getSiguiente();
		}
		this->T = aux;
		T->setSiguiente(this->T);
	}
	aux->setSiguiente(NULL);
	this->numNodos--;
	return dato;
}

int ListaCircular::removeRef(int Ref) {
	if (Ref > numNodos || Ref < 1) {
		return (int)NULL;
	}
	if(listaVacia()) {
		return (int)NULL;
	}

	Nodo* aux = this->H;
	//Si la lista solo tiene un nodo.
	if(this->H == this->T) {
		this->H = NULL;
		this->T = NULL;
		this->numNodos--;
		return aux->getDato();
	}
	else {
		Nodo* scout = this->H;
		//scout apunta al lugar al que debe apuntar aux para poder realizar la asignación del siguiente de aux.
		for(int i = 1; i < Ref; i++) {
			scout = scout->getSiguiente();
		}
		int dato = scout->getDato();
		//Se recorre aux hasta llegar a uno antes de scout para después asignarlo al siguiente de éste.
		for(int i = 1; i < Ref-1; i++) {
			aux = aux->getSiguiente();
		}
		aux->setSiguiente(scout->getSiguiente());
		this->numNodos--;
		return dato;
	}
}

void ListaCircular::vaciarListaCircular() {
	while(numNodos != 0) {
		removeFinal();
	}
}

Nodo* ListaCircular::buscarElemento(int dato) {
	Nodo* aux = this->H;
	if(listaVacia()) {
		return NULL;
	}
	int i = 1, posicion = 1;
	//Busca el dato en la lista y obtiene su posición (referencia) para después obtener el apuntador.
	while(aux->getDato() != dato) {
		aux = aux->getSiguiente();
		if(i == numNodos) {
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

void ListaCircular::show() {
	Nodo* aux = this->H;
	int i = 1;
	std::cout<<"Contenido Lista Circular:"<<std::endl;
	while(i <= numNodos) {
		std::cout<<"Nodo: "<<i<<" Dato: "<<aux->getDato()<<std::endl;
		aux = aux->getSiguiente();
		i++;
	}
}
