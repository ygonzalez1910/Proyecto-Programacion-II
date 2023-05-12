// AplicacionGimnasio.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Menu.h"


int main()
{
  /*  Fecha* fecha = new Fecha(19,10,2004);
    Corredor* corredor = new Corredor("Yuliana","Melannie","Jeremy",fecha,'F',45.5);
    cout << corredor->toString();
    system("pause");
 */
    
    Menu* i = new Menu();
    i->iniciar();

    delete i;
}

