#include "Persona.h"

Persona::Persona(string n,int e,string o)
{
	nombre=n;
	edad=e;
	ocupacion=o;
}

string Persona::getNombre(){
	return nombre;
}

int Persona::getEdad(){
	return edad;
}

string Persona::getOcupacion(){
	return ocupacion;
}

Persona::~Persona()
{
	//dtor
}
