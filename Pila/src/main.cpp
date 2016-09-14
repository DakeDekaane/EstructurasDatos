/* main.cpp

Sánchez Neri David Yaxkin

Prueba de la implementación de la clase Pila.
*/

#include "Pila.h"
#include <cstdlib>

int main()
{
	Pila p = Pila();
	int numero;

	std::cout<<"\nPrueba de push."<<std::endl;
	for (int i = 1; i <= 10; ++i) {
		numero = rand() % 100;
		p.push(numero);
		std::cout<<"Colocando el dato: "<< numero <<std::endl;
		
	}
	p.show();


	std::cout<<"\nPrueba de pop."<<std::endl;
	std::cout<<"Retirando el dato: " << p.pop() << " de la pila." <<std::endl;
	std::cout<<"Retirando el dato: " << p.pop() << " de la pila." <<std::endl;
	std::cout<<"Retirando el dato: " << p.pop() << " de la pila." <<std::endl;
	p.show();

	std::cout<<"\nVaciando la pila."<<std::endl;
	p.vaciarPila();
	p.show();

	return 0;
}
