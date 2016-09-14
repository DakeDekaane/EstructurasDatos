/*ListaCircular.h

Sánchez Neri David Yaxkin

Declaración de atributos y métodos de la clase Nodo
para la implementación de la estructura de datos de tipo lista circular.
*/

#include "Nodo.h"

class ListaCircular {

	public:

		Nodo* H;	//Apuntador al inicio de la lista.
		Nodo* T;	//Apuntador al final de la lista.
		int numNodos; //Variable que lleva el conteo de los nodos en la lista.

		/* Constructor. */
		ListaCircular();

		/* Checa si la lista está vacía.
		@return Si la lista esta vacía devuelve true, en caso contrario devuelve false.
		*/
		bool listaVacia();
		
		/* Inserta un elemento al inicio de la lista.
		@param dato Dato a insertar.
		*/
		void addInicio(int dato);
		
		/* Inserta un elemento al final de la lista.
		@param dato Dato a insertar.
		*/
		void addFinal(int dato);
		
		/* Inserta un elemento en la lista en el lugar dado por la referencia.
		@param dato Dato a insertar.
		@param Ref Lugar en el que se va a insertar el dato.
		*/
		void addRef(int dato, int Ref);
		
		/* Remueve el primer elemento de la lista.
		@return El dato removido
		*/
		int removeInicio();

		/* Remueve el último elemento de la lista.
		@return El dato removido
		*/
		int removeFinal();
		
		/* Remueve un elemento de la lista localizado en el lugar dado por la referencia
		@param Ref Lugar del que se removerá el elemento.
		@return El dato removido
		*/
		int removeRef(int Ref);
		
		/*Vacía la lista.
		*/
		void vaciarListaCircular();
		
		/* Busca un elemento en la lista con el dato ingresado.
		@param dato Dato a buscar.
		@return Apuntador al nodo que contiene el dato.
		*/
		Nodo* buscarElemento(int dato);
		
		/*Muestra los elementos de la lista de manera ordenada
		*/
		void show();
};