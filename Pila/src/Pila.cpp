/* Pila.cpp

Sánchez Neri David Yaxkin

Definición de los métodos de la clase Pila para la implementación de la estructura de datos de tipo pila.
*/

#include "Pila.h"

Pila::Pila() {
	this->top = NULL;
	this->numNodos = 0;
}


bool Pila::pilaVacia() {
	if(this->top == NULL)
		return true;
	return false;
}

void Pila::push(int dato) {
	Nodo* aux = new Nodo(dato);
	aux->setSiguiente(top);
	top = aux;
	numNodos++;
}

int Pila::pop() {
	//Si la pila está vacía.
	if(pilaVacia()) {
		return (int)NULL;
	}
	//Si la pila solo tiene un nodo.
	Nodo* aux = top;
	if(this->top->getSiguiente() == NULL) {
		this->top = NULL;
	}
	//En caso contrario.
	else {
		this->top = this->top->getSiguiente();
	}
	numNodos--;
	return aux->getDato();
}

void Pila::vaciarPila() {
	while(numNodos != 0) {
		pop();
	}
}

void Pila::show() {
	Nodo* aux = this->top;
	int i = 1;
	std::cout<<"Contenido de la Pila"<<std::endl;
	while(aux != NULL) {
		std::cout<<"Nodo: "<<i<<" Dato: "<<aux->getDato()<<std::endl;
		aux = aux->getSiguiente();
		i++;
	}
}
