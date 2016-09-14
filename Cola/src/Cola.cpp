/* Cola.cpp

Sánchez Neri David Yaxkin

Definición de los métodos de la clase Cola
para la implementación de la estructura de datos de tipo cola.
*/

#include "Cola.h"

Cola::Cola() {
	this->H = NULL;
	this->T = NULL;
	this->numNodos = 0;
}

bool Cola::colaVacia() {
	if(this->H == NULL && this->T == NULL)
		return true;
	return false;
}

void Cola::enqueue(int dato) {
	Nodo* aux = new Nodo(dato);
	if(colaVacia()) {
		this->H = aux;
	}
	else {
		aux->setAnterior(this->T);
		this->T->setSiguiente(aux);
	}
	this->T = aux;
	numNodos++;
}

int Cola::dequeue() {
	if(colaVacia()) {
		return (int)NULL;
	}
	//Si la cola solo tiene un nodo.
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

void Cola::vaciarCola() {
	while(numNodos != 0){
		dequeue();
	}
}

void Cola::show() {
	Nodo* aux = this->H;
	int i = 1;
	std::cout<<"Contenido de la cola"<<std::endl;
	while(aux != NULL) {
		std::cout<<"Nodo: "<<i<<" Dato: "<<aux->getDato()<<std::endl;
		aux = aux->getSiguiente();
		i++;
	}
}
