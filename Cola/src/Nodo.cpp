/* Nodo.cpp

Sánchez Neri David Yaxkin

Definición de los métodos de la clase Nodo
para su uso en la estructura de datos tipo cola.
*/

#include "Nodo.h"

Nodo::Nodo(int dato) {
	this->dato = dato;
	this->siguiente = NULL;
}

void Nodo::setDato(int dato) {
	this->dato = dato;
}

void Nodo::setSiguiente(Nodo* siguiente) {
	this->siguiente = siguiente;
}

void Nodo::setAnterior(Nodo* anterior) {
	this->anterior = anterior;
}

int Nodo::getDato() {
	return this->dato;
}

Nodo* Nodo::getSiguiente() {
	return this->siguiente;
}

Nodo* Nodo::getAnterior() {
	return this->anterior;
}
