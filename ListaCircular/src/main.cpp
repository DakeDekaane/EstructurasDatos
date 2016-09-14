/* main.cpp

Sánchez Neri David Yaxkin

Prueba de la implementación de la clase ListaCircular.
*/

#include "ListaCircular.h"
#include <cstdlib>

int main()
{
	int numero;
	ListaCircular lc = ListaCircular();

	std::cout<<"\n\t\tPrueba de Lista Circular.\n"<<std::endl;
	std::cout<<"\nLlenando la lista con números aleatorios."<<std::endl;
	for (int i = 0; i < 10; i++) {
		numero = rand() % 100;
		lc.addFinal(numero);
		std::cout<<"Añadiendo al final: "<< numero <<std::endl;
	}
	lc.show();

	std::cout<<"\nAñadiendo al inicio un valor de 20."<<std::endl;
	lc.addInicio(20);
	lc.show();
	
	std::cout<<"\nAñadiendo el valor 13 en el lugar 4."<<std::endl;
	lc.addRef(13,4);
	lc.show();

	std::cout<<"\nRemoviendo el primer elemento de la lista, el cual es " << lc.removeInicio() << "."<<std::endl;
	lc.show();

	std::cout<<"\nRemoviendo el último elemento de la lista, el cual es " << lc.removeFinal() << "."<<std::endl;
	lc.show();

	std::cout<<"\nRemoviendo el dato del lugar 7, el cual es " << lc.removeRef(7) << "."<<std::endl;
	lc.show();

	std::cout<<"\nPrueba de búsqueda (\"0\" indica que el elemento no está en la lista)."<<std::endl;
	std::cout<<"Dato con valor 4 está en: "<<lc.buscarElemento(4)<<std::endl;
	std::cout<<"Dato con valor 4 está en: "<<lc.buscarElemento(13)<<std::endl;
	
	std::cout<<"\nVaciando la lista."<<std::endl;
	lc.vaciarListaCircular();
	lc.show();

	return 0;
}