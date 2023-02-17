#include <iostream>
#include <string>
#include "Arbol.h"
#include <cstdlib>
#include <string>
using namespace std;

int main()
{

    string nombre,ocupacion;
    Arbol tree;
    int opc,edad;

    do{
		cout<<"\n     ---------- ARBOL BINARIO DE BUSQUEDA ----------";
		cout<<"\n\n\tElige la opcion que desea:\n\n\t1. Insertar nodo\n\t2. ";
		cout<<"Mostrar arbol\n\t3. Buscar nodo\n\t4. SALIR";
		cout<<"\n\n\tOpci\242n: ";
		cin>>opc;
		system("cls");
		switch(opc){
			case 1:
				cout<<"\n\tIngresa el nombre: ";
				cin>>nombre;
				cout<<"\tIngresa edad: ";
				cin>>edad;
				cout<<"\tIngresa ocupacion: ";
				cin>>ocupacion;
				tree.insertarNodos(nombre,edad,ocupacion,"");
				cout<<"\n\n\t";
				system("pause");
				system("cls");
			break;

			case 2:
				tree.verArbol();
				cout<<"\n\n\n\n\t";
				system("pause");
				system("cls");
			break;

			case 3:
				cout<<"\n\tIngresa el nombre a buscar: ";
				cin>>nombre;
				tree.setNombre(nombre);
				cout<<"\n\n\n\n\t";
				system("pause");
				system("cls");
			break;

			case 4:
			break;
		}
    }while(opc!=4);

    return 0;
}
