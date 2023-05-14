// AplicacionGimnasio.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Menu.h"


int main()
{
    Menu* i = new Menu();
    i->iniciar();

    delete i;
}

