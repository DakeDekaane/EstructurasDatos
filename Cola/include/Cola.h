/* Cola.h

Sánchez Neri David Yaxkin

Declaración de atributos y métodos de la clase Nodo
para la implementación de la estructura de datos de tipo cola.
*/

#include "Nodo.h"

class Cola {

	public:

		Nodo* H;	//Apuntador al inicio de la cola.
		Nodo* T;	//Apuntador al final de la cola.
		int numNodos; //Variable que lleva el conteo de los nodos en la cola.

		/* Constructor. */
		Cola();

		/* Checa si la cola está vacía.
		@return Si la cola esta vacía devuelve true, en caso contrario devuelve false.
		*/
		bool colaVacia();
		
		/* Inserta un elemento al final de la cola.
		@param dato Dato a insertar.
		*/
		void enqueue(int dato);
		
		/* Remueve el primer elemento de la cola.
		@return El dato removido
		*/
		int dequeue();

		/*Vacía la cola.
		*/
		void vaciarCola();
		
		/*Muestra los elementos de la cola de manera ordenada
		*/
		void show();
};