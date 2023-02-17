#ifndef ARBOL_H
#define ARBOL_H
#include <string>
#include <vector>
#include "Persona.h"
#include "Nodos.h"
using namespace std;

class Arbol
{
	public:
		Arbol();
		void insertarNodos(string n,int e,string o,string raiz),setNombre(string n);
		void preorden(Nodos *arbol),inorden(Nodos *arbol),posorden(Nodos *arbol),verArbol();
		bool buscarNodo(Nodos *arbol,string nn);
		virtual ~Arbol();

	protected:

	private:
		Nodos *tree,*aux;
		string name;
};

#endif // ARBOL_H
