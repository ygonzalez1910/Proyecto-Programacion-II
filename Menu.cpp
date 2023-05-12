#include <iostream>
using namespace std;

#include "Menu.h"


Menu::Menu() : opcion(0), triatlonistas(new Lista<Triatlonista>()), 
grupos(new Lista<Grupo>()), cursos(new Lista<Curso>()) {

}

Menu::~Menu() {

}

void Menu::menuPrincipal() {
	cout << "------ MENU PRINCIPAL ------";
	cout << "\n1. Ingresar cliente.";
	cout << "\n2. Mostrar clientes.";
	cout << "\n3. Actualizar cliente.";
	cout << "\n4. Agregar curso.";
	cout << "\n5. Mostrar cursos.";
	cout << "\n6. Salir";
}

void Menu::iniciar() {
	
	//aqui no se declaran listas porque ya las tiene la clase inicializadas

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
	char nivel = ' ';
	string cc = " ";
	int d = 0, m = 0, a = 0;

	Triatlonista* tria;
	Curso* curso;
	IteradorLista<Triatlonista>* it;
	IteradorLista<Curso>* itc;

	do {
		system("cls");
		menuPrincipal();
		cout << "\nDigite una opcion: ";
		cin >> opcion;
		char continuar = 'S';
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
				do {
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
				} while (triaGanados > triaParticipados || triaGanados < 0);

				cout << "Ingrese sus horas de entramiento: ";
				cin >> horasEntrenamiento;

				cout << "Ingrese su temp promedio: ";
				cin >> temPromedio;

				cout << "Indique su sexo: (M/F/X): ";
				cin >> sexo;

				try {
					cout << "El genero elegido es: " << sexo << endl;
					if (sexo != 'F' && sexo != 'M' && sexo != 'X') {
						throw std::invalid_argument("Genero invalido");

					}

				}
				catch (exception& e) {
					cerr << "Error: " << e.what() << endl;
					cout << "Indique su sexo: (M/F/X): ";
					cin >> sexo;
				}

				if (sexo == 'F' || sexo == 'M' || sexo == 'X') {
					cout << "El sexo elegido es: " << sexo << endl;
				}

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
				break;
			} while (continuar == 'S');
			delete fecha;
			delete tria;
			system("pause");
		case 2:

			system("cls");
		
				cout << "\n------ MOSTRAR CLIENTES ------";
				it = triatlonistas->obtenerIterador();
				while (it->masElementos()) {
					tria = it->proximoElemento();
					cout << "\n" << tria->toString();
				}
				system("pause");
				break;
			} while (continuar == 'S');
			delete it;
		
			
		case 3:
			system("cls");
			do{
				cout << "\n------ ACTUALIZAR CLIENTE INFORMACION DE CLIENTE ------";
				it = triatlonistas->obtenerIterador();
				while (it->masElementos()) {
					tria = it->proximoElemento();
					cout << "\nDigite la cedula del cliente al que desea actualizar sus datos: ";
					cin >> cedula;
					/////*
					////*/if (id == tria->getCedula()) {
					////cout << "\n" << tria->toString();
					////cout << "\nEstatura:  ";
					////cin >> estatura;
					////tria->setEstatura(estatura);
					//// //cout << "\nPeso:  ";
					////cin >> peso;
					////tria->setPeso(peso);
					//// //cout << "\nPorcentaje de grasa corporal:  ";
					////cin >> porcentajeGrasa;
					////tria->setPorcentajeGrasa(porcentajeGrasa);
					//// //cout << "\nPorcentaje masa muscular:  ";
					////cin >> porcentajeMasaMuscular;
					////tria->setPorcentajeMasaMuscular(porcentajeMasaMuscular);
					////cout << "\nCliente actualizado exitosamente.";
					////break;
					////}

				}
			} while (continuar == 'S');
			
			break;
		delete it;
		system("pause");
		break;
		case 4:
			system("cls");
				cout << "Digite el nombre del curso a crear: ";
				cin >> cc;
				cout << "Digite el nivel del curso:\n (A: Avanzado. B: Intermedio. C: Principiante.): ";
				cin >> nivel;
				cout << "Digite la fecha de inicio del curso: ";
				cout << "Primero el dia: ";
				cin >> d;
				cout << "Ahora el mes: ";
				cin >> m;
				cout << "Por ultimo el a�o: ";
				cin >> a;
				fecha = new Fecha(d, m, a);
				curso = new Curso(cc, nivel, fecha);
				cursos->agregar(curso);
			delete curso;
			//se cierra despues de utilizar este metodo por alguna raz�n
			system("pause");
		break;
		case 5:
			system("cls");
			do {
				cout << "\n------ MOSTRAR CURSOS ------";
				itc = cursos->obtenerIterador();
				while (itc->masElementos()) {
					curso = itc->proximoElemento();
					cout << "\n" << curso->toString();
				}
			} while (continuar == 'S');

			delete itc;
			system("pause");
			break;
		case 6:
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