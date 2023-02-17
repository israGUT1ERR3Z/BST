#include "Arbol.h"
#include "Persona.h"
#include "Nodos.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Arbol::Arbol()
{
	tree=NULL;
}

void Arbol::insertarNodos(string n,int e,string o,string raiz){
	int comp;
	Nodos *nuevo=new Nodos(n,e,o);
	nuevo->der=NULL;
	nuevo->izq=NULL;
	if(tree==NULL){
		tree=nuevo;
		tree->izq=NULL;
		tree->der=NULL;
		aux=tree;
		cout<<"\n\n\tNodo insertado: "<<n<<"\n\n";
	}else{
		if(raiz==""){
			raiz=tree->p->nombre;
			comp=n.compare(raiz);
		}else{
			comp=n.compare(raiz);
		}
		if(comp<0){
			if(tree->izq==NULL){
				tree->izq=nuevo;
				cout<<"\n\n\tNodo izquierdo insertado de "<<raiz<<"\n\n";
				tree=aux;
				return;
			}else{
				tree=tree->izq;
				insertarNodos(n,e,o,tree->p->nombre);
			}
		}else{
			if(tree->der==NULL){
				tree->der=nuevo;
				cout<<"\n\n\tNodo derecho insertado de "<<raiz<<"\n\n";
				tree=aux;
				return;
			}else{
				tree=tree->der;
				insertarNodos(n,e,o,tree->p->nombre);
			}
		}
	}
}

void Arbol::preorden(Nodos *arbol){
	if(arbol==NULL){
		return;
	}else{
		cout<<arbol->p->nombre<<" tiene "<<arbol->p->edad<<" a\244os y es ";
		cout<<arbol->p->ocupacion<<"\n\t\t";
		preorden(arbol->izq);
		preorden(arbol->der);
	}
}

void Arbol::inorden(Nodos *arbol){
	if(arbol==NULL){
		return;
	}else{
		inorden(arbol->izq);
		cout<<arbol->p->nombre<<" tiene "<<arbol->p->edad<<" a\244os y es ";
		cout<<arbol->p->ocupacion<<"\n\t\t";
		inorden(arbol->der);
	}
}

void Arbol::posorden(Nodos *arbol){
	if(arbol==NULL){
		return;
	}else{
		posorden(arbol->izq);
		posorden(arbol->der);
		cout<<arbol->p->nombre<<" tiene "<<arbol->p->edad<<" a\244os y es ";
		cout<<arbol->p->ocupacion<<"\n\t\t";
	}
}

void Arbol::verArbol(){
	int opc2;
	cout<<"\n\tDe las siguientes opciones, seleccoiona la forma de mostrar el ";
	cout<<"arbol: \n\t\t1. Preorden\n\t\t2. Inorden\n\t\t3. Postorden\n\n\t\t";
	cout<<"Opci\242n: ";
	cin>>opc2;
	cout<<"\n\n\t\t";
	switch(opc2){
		case 1:
			preorden(tree);
		break;

		case 2:
			inorden(tree);
		break;

		case 3:
			posorden(tree);
		break;
	}
}

bool Arbol::buscarNodo(Nodos *arbol,string nn){
	if(arbol==NULL){
		return false;
	}else if(arbol->p->nombre==nn){
		return true;
	}else if((nn.compare(arbol->p->nombre))<0){
		return buscarNodo(arbol->izq,nn);
	}else{
		return buscarNodo(arbol->der,nn);
	}
}

void Arbol::setNombre(string n){
	name=n;
	bool encontrado=buscarNodo(tree,name);
	if(encontrado==true){
		cout<<"\n\n\t"<<name<<" fue encontrado en el arbol\n\n\t";
	}else{
		cout<<"\n\n\t"<<name<<" no fue encontrado en el arbol\n\n\t";
	}
}


Arbol::~Arbol()
{
	//dtor
}
