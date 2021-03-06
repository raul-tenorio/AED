#include <iostream>
#include <fstream>
#include <ctime>
#include "ejercicios.h"

using namespace std;

int menu();

int main()
{
    bool salir = false;
    while (!salir)
    {
        switch (menu())
        {
        case 0:
            cout << "Saliendo...\n";
            salir = true;
            break;
        case 1:
            ejercicio1();
            break;
        case 2:
            ejercicio2();
            break;
        case 3:
            ejercicio3();
            break;
        default:
            cout << "\nOpción inválida\n";
            break;
        };
    };
    return 0;
}
