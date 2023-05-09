#include <iostream>
using namespace std;

#include "Menu.h"


Menu::Menu() : opcion(0), triatlonistas(new Lista<Triatlonista>()), grupos(new Lista<Grupo>()) {

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


	//implementacion de listas
	Lista<Triatlonista> listaTriatlonista;
	Lista<Curso> listaCurso;
	Lista<Grupo> listaGrupo;
	
	//depor
	string nombre, cedula, telefono;
	int dia = 0, mes = 0, anio = 0;
	Fecha* fecha ;
	//tria
	bool estado;
	int triaGanados = 0;
	int triaParticipados = 0;
	
	Corredor* corredor; 
	Ciclista* ciclista;
	Nadador* nadador;
	//ci
	int horasEntrenamiento = 0;
	double temPromedio = 0.0;
	//na
	double masaMuscular = 0.0;
	double peso = 0.0;
	double porcentajeGrasaCorporal = 0.0;
	//co
	char sexo;
	double estatura = 0.0;

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
			cout << "\nDigite la cedula: ";
			cin >> cedula;
			cout << "\nDigite el numero de telefono: ";
			cin >> telefono;
			cout << "\nDigite la fecha de nacimiento en formato DD/MM/AA: ";
			cout << "Dia: ";
			cin >> dia;
			cout << "Mes: ";
			cin >> mes;
			cout << "Anio: ";
			cin >> anio;
			fecha = new Fecha(dia, mes, anio);
			do{
				cout << "En cuantos triatlones ha participado: ";
				cin >> triaParticipados;
				if (triaParticipados > 0) {
					cout << "Cuantos triatlones ha ganado: ";
					cin >> triaGanados;
					if (triaGanados > triaParticipados || triaGanados < 0) {
						cout << "Numero no valido, ingreselo otra vez." << endl;
					}
				}
				else {
				cout << "Numero no valido, ingreselo otra vez." << endl;
				}
			} while (triaGanados < triaParticipados && triaGanados > 0);
			
			cout << "Ingrese sus horas de entramiento: ";
			cin >> horasEntrenamiento;

			cout << "Ingrese su temp promedio: ";
			cin >> temPromedio;

			do {
				cout << "Indique su sexo: (M/F/X)";
				cin >> sexo;
			} while (sexo == 'M' || sexo == 'F' || sexo == 'X');

			cout << "Introduzca su estatura: ";
			cin >> estatura;

			cout << "Introduzca su peso: ";
			cin >> peso;

			cout << "Introduzca su masa muscular: ";
			cin >> masaMuscular;

			cout << "Introduzca su porcentaje grasa corporal: ";
			cin >> porcentajeGrasaCorporal;

			estado = true;

			corredor = new Corredor(cedula, nombre, telefono, fecha, sexo, estatura);
			nadador = new Nadador(cedula, nombre, telefono, fecha, masaMuscular, peso, porcentajeGrasaCorporal);
			ciclista = new Ciclista(cedula, nombre, telefono, fecha, horasEntrenamiento, temPromedio);

			tria = new Triatlonista(corredor, nadador, ciclista, triaGanados, triaParticipados, estado);
			triatlonistas->agregar(tria);
			cout << "\nCliente agregado exitosamente.";
			delete fecha;
			delete tria;
			system("pause");
			break;

		case 2:
			system("cls");
			cout << "\n------ MOSTRAR CLIENTES ------";
			it = listaTriatlonista.obtenerIterador();
			while (it->masElementos()) {
				tria = it->proximoElemento();
				cout << "\n" << tria->toString();
			}
			delete it;
			system("pause");
			break;
		case 3:
			system("cls");
			cout << "\n------ ACTUALIZAR CLIENTE INFORMACION DE CLIENTE ------";
			it = listaTriatlonista.obtenerIterador();
			while (it->masElementos()) {
				tria = it->proximoElemento();
				cout << "\nDigite la cedula del cliente al que desea actualizar sus datos: ";
				cin >> cedula;
				///*
				//*/if (id == tria->getCedula()) {
				//cout << "\n" << tria->toString();
				//cout << "\nEstatura:  ";
				//cin >> estatura;
				//tria->setEstatura(estatura);
				// //cout << "\nPeso:  ";
				//cin >> peso;
				//tria->setPeso(peso);
				// //cout << "\nPorcentaje de grasa corporal:  ";
				//cin >> porcentajeGrasa;
				//tria->setPorcentajeGrasa(porcentajeGrasa);
				// //cout << "\nPorcentaje masa muscular:  ";
				//cin >> porcentajeMasaMuscular;
				//tria->setPorcentajeMasaMuscular(porcentajeMasaMuscular);
				//cout << "\nCliente actualizado exitosamente.";
				//break;
				//}
				
		}
			break;
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