#include <iostream>
#include "menu.h"
using namespace std;

int main()
{
    int opcion, puntosMaximo = 0;

    do{
        system("cls");
        opcion = OpcionesDeMenu();
        //ejecutarOpcionDeMenu(opcion, puntosMaximo);
        system("pause");
    }
    while(opcion != 0);






    return 0;
}
