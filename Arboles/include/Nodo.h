#ifndef NODO_H
#define NODO_H
#include <string>
#include "Persona.h"
using namespace std;

class Nodo
{
	public:
		Nodo();
		virtual ~Nodo();

	protected:

	private:
		Persona *dato;
		Nodo *hijoIz,*hijoDe;
		friend class Arbol;

};

#endif // NODO_H
