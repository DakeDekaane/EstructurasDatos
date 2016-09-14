/* Nodo.h

Sánchez Neri David Yaxkin

Declaración de atributos y métodos de la clase Nodo
para su uso en la estructura de datos tipo lista doblemente ligada.
*/

#include <iostream>

class Nodo {

	private:
		int dato;	//Dato del nodo.
		Nodo* siguiente;	//Apuntador al siguiente elemento en la lista.
		Nodo* anterior;	//Apuntador al anterior elemento en la lista.

	public:
		/*Constructor de nodo con un dato.
		@param Dato Dato con el que se inicializa el nodo.
		*/
		Nodo(int dato);

		/*Modifica el dato del nodo.
		@param dato Dato nuevo.
		*/
		void setDato(int dato);

		/*Modifica el apuntador al siguiente elemento.
		@param siguiente Nuevo apuntador al siguiente elemento.
		*/
		void setSiguiente(Nodo* siguiente);

		/*Modifica el apuntador al anterior elemento.
		@param anterior Nuevo apuntador al anterior elemento.
		*/
		void setAnterior(Nodo* anterior);

		/*Devuelve el dato del nodo
		@return Devuelve el dato del nodo.
		*/
		int getDato();

		/*Devuelve el apuntador al siguiente elemento.
		@return Devuelve el apuntador al siguiente elemento.
		*/
		Nodo* getSiguiente();

		/*Devuelve el apuntador al anterior elemento.
		@return Devuelve el apuntador al anterior elemento.
		*/
		Nodo* getAnterior();

		/*Destructor*/
		~Nodo();
};
