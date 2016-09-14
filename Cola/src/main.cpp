/* main.cpp

Sánchez Neri David Yaxkin

Prueba de la implementación de la clase Cola.
*/

#include "Cola.h"
#include <cstdlib>

int main()
{
	Cola c = Cola();
	int numero;

	std::cout<<"\nPrueba de encolar (enqueue)."<<std::endl;
	for (int i = 1; i <= 10; ++i) {
		numero = rand() % 100;
		c.enqueue(numero);
		std::cout<<"Encolando el dato: "<< numero <<std::endl;
		
	}
	c.show();


	std::cout<<"\nPrueba de desencolar (dequeue)."<<std::endl;
	std::cout<<"Se retiró el dato: " << c.dequeue() << " de la cola." <<std::endl;
	std::cout<<"Se retiró el dato: " << c.dequeue() << " de la cola." <<std::endl;
	std::cout<<"Se retiró el dato: " << c.dequeue() << " de la cola." <<std::endl;
	c.show();
	
	std::cout<<"\nVaciando la cola."<<std::endl;
	c.vaciarCola();
	c.show();

	return 0;
}