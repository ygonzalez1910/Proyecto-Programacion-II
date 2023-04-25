using std::stringstream;

Deportista::Deportista(string cedula, string nombre, string numeroTelefono, ManejoSimpleFechas* fechaNacimiento)
	:cedula(cedula), nombre(nombre), numeroTelefono(numeroTelefono), fechaNacimiento(fechaNacimiento)
{
}

Deportista::~Deportista()
{
}

//string Deportista::toString()
//{
//	stringstream r;
//	r << "Cedula: " << cedula << endl;
//	r << "Nombre: " << nombre << endl;
//	r << "Numero de telefono: " << numeroTelefono << endl;
//	r << "Fecha Nacimiento: " << fechaNacimiento << endl;
//	return r.str();
//}
