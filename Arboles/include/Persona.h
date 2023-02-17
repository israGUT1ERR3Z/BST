#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using namespace std;

class Persona
{
	public:
		Persona(string n,int e,string o);
		string getNombre(),getOcupacion();
		int getEdad();
		virtual ~Persona();

	protected:

	private:
		string nombre,ocupacion;
		int edad;
		friend class Arbol;
};

#endif // PERSONA_H
