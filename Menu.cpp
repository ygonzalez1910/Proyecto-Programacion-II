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

	string nombre = " ";
	string nombreCurso = " ";
	string cedula = " ";
	string telefono = " ";

	int dia = 0, mes = 0, anio = 0;
	Fecha* fecha = new Fecha(dia,mes,anio);
	
	bool estado = true;
	int triaGanados = 0;
	int triaParticipados = 0;
	char sexo = ' ';
	double estatura = 0.0;
	char nivel = ' ';
	string cc = " ";
	int d = 0, m = 0, a = 0;

	Corredor* corredor = new Corredor(cedula,nombre,telefono,fecha,sexo,estatura);
	int horasEntrenamiento = 0;
	double temPromedio = 0.0;

	Ciclista* ciclista = new Ciclista(cedula,nombre,telefono,fecha,horasEntrenamiento,temPromedio);
	double masaMuscular = 0.0;
	double peso = 0.0;
	double porcentajeGrasaCorporal = 0.0;

	Nadador* nadador = new Nadador(cedula,nombre,telefono,fecha,masaMuscular,peso,porcentajeGrasaCorporal);

	Triatlonista* tria = new Triatlonista(corredor,nadador,ciclista,triaGanados,triaParticipados,estado);
	Curso* curso = new Curso(nombreCurso, nivel, fecha);

	IteradorLista<Triatlonista>* it;
	IteradorLista<Curso>* itc;

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
				
				while (true) {
					try {
						if (sexo != 'F' && sexo != 'M' && sexo != 'X') {
							throw invalid_argument("Genero invalido");
						}
						cout << "El genero elegido es: " << sexo << endl;
						break;
					}
					catch (exception& e) {
						
						cerr << "Error: " << e.what() << endl;
						cout << "Indique su sexo: (M/F/X): ";
						cin >> sexo;
					}
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
				cout << "\nCliente agregado exitosamente.\n\n";

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
			system("pause");
			delete it;
	
			break;
		case 3:
			system("cls");

				cout << "\n------ ACTUALIZAR CLIENTE INFORMACION DE CLIENTE ------";
				cout << "\nDigite la cedula del cliente al que desea actualizar sus datos: ";
				cin >> cedula;
				it = triatlonistas->obtenerIterador();
				while (it->masElementos()) {
					tria = it->proximoElemento();
			
					if (cedula == tria->getcedula()) {
					cout << "\n" << tria->toString();
					cout << "\nEstatura: ";
					cin >> estatura;
					cout << "\nPeso:  ";
					cin >> peso;
					cout << "Porcentaje de grasa corporal: " << endl;
					cin >> porcentajeGrasaCorporal;
					cout << "Porcentaje de masa muscular: " << endl;
					cin >> masaMuscular;
					tria->setDatosBiometricos(estatura,peso,porcentajeGrasaCorporal,masaMuscular);
					cout << "\nCliente actualizado exitosamente.";
					}

				}
			
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
				cout << "Digite la fecha de inicio del curso: " << endl;
				cout << "El dia: ";
				cin >> d;
				cout << "Mes: ";
				cin >> m;
				cout << "Anio: ";
				cin >> a;

				fecha = new Fecha(d, m, a);
				curso = new Curso(cc, nivel, fecha);
				cursos->agregar(curso);
			
				cout << "El curso se ha creado exitosamente." << endl;

				cin.ignore();
		break;
		case 5:
			system("cls");

				cout << "\n------ MOSTRAR CURSOS ------";
				itc = cursos->obtenerIterador();
				while (itc->masElementos()) {
					curso = itc->proximoElemento();
					cout << "\n" << curso->toString();
				}

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