#include "Nodos.h"
#include "Persona.h"
#include <string>
using namespace std;

Nodos::Nodos(string nom,int ed,string ocu)
{
	p=new Persona(nom,ed,ocu);
}

Nodos::~Nodos()
{
	//dtor
}
