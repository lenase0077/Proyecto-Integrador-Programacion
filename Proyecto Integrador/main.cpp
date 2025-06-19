#include <iostream>
#include "menu.h"
using namespace std;

int main()
{
string ganador;
int puntajeganador;
    int opcion, puntosMaximo = 0;

    do{
        system("cls");
        opcion = OpcionesDeMenu();
        ejecutarOpcionDeMenu(opcion,ganador,puntajeganador);
        system("pause");
    }
    while(opcion != 0);






    return 0;
}
