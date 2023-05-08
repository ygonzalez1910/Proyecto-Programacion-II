#include <iostream>
using namespace std;

#include "Menu.h"


Menu::Menu() : opcion(0), triatlonistas(new Lista<Triatlonista>()) {

}

Menu::~Menu() {

}

void Menu::menuPrincipal() {
	cout << "------ MENU PRINCIPAL ------";
	cout << "\n1. Ingresar cliente.";
	cout << "\n2. Mostrar clientes.";
	cout << "\n3. Actualizar cliente.";
	cout << "\n4. Salir";
}

void Menu::iniciar() {

	string nombre, id;
	bool estado = true;

	Deportista* corredor; //
	Deportista* ciclista;
	Deportista* nadador;

	int triaGanados = 0;
	int triaParticipados = 0;

	Triatlonista* tria;

	IteradorLista<Triatlonista>* it;

	do {
		system("cls");
		menuPrincipal();
		cout << "\nDigite una opcion: ";
		cin >> opcion;

		switch (opcion) {
		case 1:
			system("cls");
			cout << "\n------ INGRESAR CLIENTE ------";
			cout << "\nDigite el nombre: ";
			cin >> nombre;
			cout << "\nDigite el id: ";
			cin >> id;
			//tria = new Triatlonista();
			//triatlonistas->agregar(tria);
			cout << "\nCliente agregado exitosamente.";
			system("pause");
			break;
		case 2:
			system("cls");
			cout << "\n------ MOSTRAR CLIENTES ------";
			it = triatlonistas->obtenerIterador();
			while (it->masElementos()) {
				tria = it->proximoElemento();
				cout << "\n" << tria->toString();
			}
			delete it;
			system("pause");
			break;
		case 3:
			system("cls");
			cout << "\n------ ACTULIZAR CLIENTE ------";
			it = triatlonistas->obtenerIterador();
			while (it->masElementos()) {
				tria = it->proximoElemento();
				cout << "\nDigite el id del cliente: ";
				cin >> id;
				if (id == tria->getcedula()) {
				cout << "\n" << tria->toString();
				cout << "\nDigite el nuevo nombre: ";
				cin >> nombre;
				tria->setNombre(nombre);
				cout << "\nCliente actualizado exitosamente.";
				break;
			}

		}
		delete it;
		system("pause");
		break;
		case 4:
			system("cls");
			cout << "\nGracias por utilizar la aplicacion";
			system("pause");
			break;
		default:
			system("cls");
			cout << "\nOpcion no es valida.";
			system("pause");
			break;

	}

}while (opcion != 4);

}