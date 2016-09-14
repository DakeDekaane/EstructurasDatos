/* main.cpp

Sánchez Neri David Yaxkin

Prueba de la implementación de la clase ListaDoblementeLigada.
*/

#include "ListaDL.h"
#include <cstdlib>

int main()
{
	int numero;
	ListaDL ldl = ListaDL();

	std::cout<<"\n\t\tPrueba de Lista Circular.\n"<<std::endl;
	std::cout<<"\nLlenando la lista con números aleatorios."<<std::endl;
	for (int i = 0; i < 10; i++) {
		numero = rand() % 100;
		ldl.addFinal(numero);
		std::cout<<"Añadiendo al inicio: "<< numero <<std::endl;
	}
	ldl.show();

	std::cout<<"\nAñadiendo al final un valor de 0."<<std::endl;
	ldl.addFinal(0);
	ldl.show();
	
	std::cout<<"\nAñadiendo el valor 34 en el lugar 7."<<std::endl;
	ldl.addRef(34,7);
	ldl.show();

	std::cout<<"\nRemoviendo el primer elemento de la lista, el cual es " << ldl.removeInicio() << "."<<std::endl;
	ldl.show();

	std::cout<<"\nRemoviendo el último elemento de la lista, el cual es " << ldl.removeFinal() << "."<<std::endl;
	ldl.show();

	std::cout<<"\nRemoviendo el dato del lugar 2, el cual es " << ldl.removeRef(2) << "."<<std::endl;
	ldl.show();

	std::cout<<"\nPrueba de búsqueda (\"0\" indica que el elemento no está en la lista)."<<std::endl;
	std::cout<<"Dato con valor 4 está en: "<<ldl.buscarElemento(8)<<std::endl;
	std::cout<<"Dato con valor 4 está en: "<<ldl.buscarElemento(34)<<std::endl;

	std::cout<<"\nVaciando la lista."<<std::endl;
	ldl.vaciarListaDL();
	ldl.show();
	
	return 0;
}