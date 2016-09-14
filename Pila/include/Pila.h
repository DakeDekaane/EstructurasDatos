/* Pila.h

Sánchez Neri David Yaxkin

Declaración de atributos y métodos de la clase Nodo
para la implementación de la estructura de datos de tipo pila.
*/

#include "Nodo.h"

class Pila {

	public:

		Nodo* top;	//Apuntador al tope de la pila.
		int numNodos; //Variable que lleva el conteo de los nodos en la pila.
		
		/* Constructor. */
		Pila();

		/* Checa si la pila está vacía.
		@return Si la pila esta vacía devuelve true, en caso contrario devuelve false.
		*/
		bool pilaVacia();
		
		/* Inserta un elemento en el tope de la pila.
		@param dato Dato a insertar.
		*/
		void push(int dato);
		
		/* Remueve el tope de la pila.
		@return El dato removido
		*/
		int pop();

		/*Vacía la pila.
		*/
		void vaciarPila();
		
		/*Muestra los elementos de la pila de manera ordenada
		*/
		void show();
};