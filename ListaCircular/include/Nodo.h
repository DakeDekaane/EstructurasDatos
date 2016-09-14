/* Nodo.h

Sánchez Neri David Yaxkin

Declaración de atributos y métodos de la clase Nodo
para su uso en la estructura de datos tipo lista circular.
*/

#include <iostream>

class Nodo {

	private:
		int dato;	//Dato del nodo.
		Nodo* siguiente;	//Apuntador al siguiente elemento en la lista.

	public:
		/*Constructor de nodo con un dato.
		@param dato Dato con el que se inicializa el nodo.
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

		/*Devuelve el dato del nodo
		@return Devuelve el dato del nodo.
		*/
		int getDato();

		/*Devuelve el apuntador al siguiente elemento.
		@return Devuelve el apuntador al siguiente elemento.
		*/
		Nodo* getSiguiente();

		/*Destructor*/
		~Nodo();
};
