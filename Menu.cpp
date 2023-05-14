#include <iostream>
using namespace std;

#include "Menu.h"


Menu::Menu() : opcion(0), triatlonistas(new Lista<Triatlonista>()), 
grupos(new Lista<Grupo>()), cursos(new Lista<Curso>()),fechas(new Lista<Fecha>()){

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
	cout << "\n6. Inscribirse a curso.";
	cout << "\n0. Salir";
}

void Menu::iniciar() {
	char opcion2 = ' ';
	//aqui no se declaran listas porque ya las tiene la clase inicializadas
	//depor
	string nombre, cedula, telefono;
	int dia = 0, mes = 0, anio = 0;
	Fecha* fecha = new Fecha(dia, mes, anio);
	//tria
	bool estado = true;
	int triaGanados = 0;
	int triaParticipados = 0;
	char sexo = ' ';
	double estatura = 0.0;
	char nivel = ' ';
	string cc = " ";
	int d = 0, m = 0, a = 0;
	int numeroCurso = 0;
	int capacidad = 0;
	int cantidadMatriculados = 0;
	Corredor* corredor = new Corredor(cedula, nombre, telefono, fecha, sexo, estatura);
	//ci
	int horasEntrenamiento = 0;
	double temPromedio = 0.0;
	Ciclista* ciclista = new Ciclista(cedula, nombre, telefono, fecha, horasEntrenamiento, temPromedio);
	double masaMuscular = 0.0;
	double peso = 0.0;
	double porcentajeGrasaCorporal = 0.0;
	Nadador* nadador = new Nadador(cedula, nombre, telefono, fecha, masaMuscular, peso, porcentajeGrasaCorporal);

	Triatlonista* tria = new Triatlonista(corredor, nadador, ciclista, triaGanados, triaParticipados, estado);
	Triatlonista* aux = new Triatlonista(corredor, nadador, ciclista, triaGanados, triaParticipados, estado);
	Curso* curso = new Curso(cc, numeroCurso, nivel, fecha,capacidad);
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
			fechas->agregar(fecha);
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

			tria->setNombre(nombre);
			tria->setCedula(cedula);
			tria->setNacimiento(dia, mes, anio);
			tria->setTelefono(telefono);

			corredor = new Corredor(cedula, nombre, telefono, fecha, sexo, estatura);
			nadador = new Nadador(cedula, nombre, telefono, fecha, masaMuscular, peso, porcentajeGrasaCorporal);
			ciclista = new Ciclista(cedula, nombre, telefono, fecha, horasEntrenamiento, temPromedio);

			tria = new Triatlonista(corredor, nadador, ciclista, triaGanados, triaParticipados, estado);

			tria->setDatosBiometricos(estatura, porcentajeGrasaCorporal, peso, masaMuscular);
			triatlonistas->agregar(tria);
			cout << "\nCliente agregado exitosamente.\n";
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

			cout << "\n------ ACTUALIZAR CLIENTE INFORMACION DE CLIENTE ------\n";

			it = triatlonistas->obtenerIterador();

			if (it->masElementos() != NULL) {

				cout << "\nDigite la cedula del cliente al que desea actualizar sus datos: ";
				cin >> cedula;


				while (it->masElementos()) {

					tria = it->proximoElemento();

					if (cedula == tria->getcedula()) {
						cout << "\n" << tria->toString();
						cout << miniMenu();
						cout << "\nDigite la opcion que desea realizar: ";
						cin >> opcion2;

						switch (opcion2) {
						case '0':
							system("cls");
							cout << "\nSaliendo de la opcion...";
							system("pause");
							break;
						case 'A':
							system("cls");
							cout << "\nDigite su nueva estatura: ";
							cin >> estatura;
							tria->getCorredor()->setEstatura(estatura);
							cout << "\nCliente actualizado exitosamente.\n";
							
							break;
						case 'B':
							system("cls");
							cout << "Porcentaje de masa muscular: " << endl;
							cin >> masaMuscular;
							tria->getNadador()->setMasaMuscular(masaMuscular);
							cout << "\nCliente actualizado exitosamente.\n";
							break;
						case 'C':
							system("cls");
							cout << "\nPeso:  ";
							cin >> peso;
							tria->getNadador()->setPeso(peso);
							cout << "\nCliente actualizado exitosamente.\n";
							break;
						case 'D':
							system("cls");
							cout << "Digite su nuevo telefono: ";
							cin >> telefono;
							tria->setTelefono(telefono);
							cout << "\nCliente actualizado exitosamente.\n";
							break;
						case 'E':
							system("cls");
							cout << "Porcentaje de grasa corporal: " << endl;
							cin >> porcentajeGrasaCorporal;
							tria->getNadador()->setPorcentajeGrasaCorporal(porcentajeGrasaCorporal);
							cout << "\nCliente actualizado exitosamente.\n";
							break;
						case 'F':
							system("cls");
							cout << "Digite sus horas entrenadas: " << endl;
							cin >> horasEntrenamiento;
							tria->getCiclista()->setHorasEntrenamiento(horasEntrenamiento);
							cout << "\nCliente actualizado exitosamente.\n";
							break;
						case 'G':
							system("cls");
							cout << "Digite su tem promedio: \n";
							cin >> temPromedio;
							tria->getCiclista()->setTemPromedio(temPromedio);
							cout << "\nCliente actualizado exitosamente.\n";
							break;
						case 'H':
							system("cls");
							cout << "Digite la nueva cantidad de triatlones participados: \n";
							cin >> triaParticipados;
							tria->setParticipados(triaParticipados);
							cout << "\nCliente actualizado exitosamente.\n";
							break;
						case 'I':
							system("cls");
							cout << "Digite la nueva cantidad de triatlones ganados: \n";
							cin >> triaGanados;
							tria->setGanados(triaGanados);
							cout << "\nCliente actualizado exitosamente.\n";
							break;
						defaul:
							system("cls");
							cout << "Opcion no valida." << endl;
							break;

						}
						
					}
				}
			}
			else {
				cout << "No hay clientes para actualizar. \n";
			}
			delete it;
			system("pause");
			break;
		case 4:
			system("cls");
			cout << "Digite el nombre del curso a crear: ";
			cin >> cc;
			cout << "Digite el numero del curso: ";
			cin >> numeroCurso;
			cout << "Digite el nivel del curso:\n (A: Avanzado. B: Intermedio. C: Principiante.): ";
			cin >> nivel;
			cout << "Digite la fecha de inicio del curso: ";
			cout << "Primero el dia: ";
			cin >> d;
			cout << "Ahora el mes: ";
			cin >> m;
			cout << "Por ultimo el a�o: ";
			cin >> a;
			cout << "Digite la capacidad del curso: ";
			cin >> capacidad;

				fecha = new Fecha(d, m, a);
				curso = new Curso(cc,numeroCurso, nivel, fecha,capacidad);
				fechas->agregar(fecha);
				cursos->agregar(curso);

				cout << "\nCurso agregado exitosamente..." << endl;
			system("pause");
			break;
		case 5:
			system("cls");

				cout << "\n------ MOSTRAR CURSOS ------";
				itc = cursos->obtenerIterador();
				while (itc->masElementos()) {
					curso = itc->proximoElemento();
					cout << "\n" << curso->toString();
				}
				
			delete itc;
			system("pause");
			break;
		case 6:
			system("cls");
			cout << "\n------ MATRICULAR CURSO ------";

			itc = cursos->obtenerIterador();
			/*while (itc->masElementos()) {
				curso = itc->proximoElemento();
				cout << "\n" << curso->toString();
			}*/
			cout << "Digite el numero de curso en que desea matricular: " << endl;
			cin >> numeroCurso;

			while (itc->masElementos()) {
				curso = itc->proximoElemento();
				cout << "Digite su cedula para reservar su espacio en un curso: " << endl;
				cin >> cedula;
				if (curso->getNumero() == numeroCurso) {
					cout << "Digite su cedula para reservar su espacio en un curso: " << endl;
					cin >> cedula;
					curso->hacerReservacion(cedula);
					cout << "Reservacion realizada exitosamente..." << endl;
					
				}
			}
			delete itc;
			system("pause");
			break;
			
		case 7:
			system("cls");

			//FALTA TERMINAR 

			cout << "\n------ DESMATRICULAR CURSO ------";

			cout << "Digite su cedula: " << endl;
			cin >> cedula;

			itc = cursos->obtenerIterador();
			while (itc->masElementos()) {
				curso = itc->proximoElemento();
				cout << "\n" << curso->toString();
			}

			while (itc->masElementos()) {
				curso = itc->proximoElemento();

				if (numeroCurso == curso->getNumero()) {
					cout << "Digite su cedula para reservar su espacio en un curso: " << endl;
					cin >> cedula;
					curso->cancelacionReservacion(cedula);
					cout << "Reservacion realizada exitosamente..." << endl;

				}
			}

			system("pause");
			break;
		case 0:
			system("cls");
			cout << "\nGracias por utilizar la aplicacion\n";
			system("pause");
			break;
		default:
			system("cls");
			cout << "\nOpcion no es valida.";
			system("pause");
			break;

	}

}while (opcion != 6);

}

string Menu::miniMenu() {

	stringstream r;
	r << "Datos que pueden ser actualizados: \n\n";
	r << "A. Estatura.\n";
	r << "B. Masa muscular.\n";
	r << "C. Peso.\n";
	r << "D. Telefono.\n";
	r << "E. Porcentaje de grasa corporal.\n";
	r << "F. Horas entrenadas.\n";
	r << "G. Tempo promedio.\n";
	r << "H. Triatlones participados.\n";
	r << "I. Triatlones ganados.\n";
	r << "0. Salir.\n";

	return r.str();

}
