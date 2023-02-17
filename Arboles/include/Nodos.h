#ifndef NODOS_H
#define NODOS_H
#include "Persona.h"

class Nodos
{
	public:
		Nodos(string nom,int ed,string ocu);
		virtual ~Nodos();

	protected:

	private:
		Persona *p;
		Nodos *izq,*der;
		friend class Arbol;
};

#endif // NODOS_H
