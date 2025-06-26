#include <iostream>
#include "menu.h"
#include <ctime>
#include "rlutil.h"
using namespace std;

int main(){

    srand(time(0));
    string ganador;
    int puntajeganador = 0;
    int opcion;

        do{
            system("cls");
            opcion = OpcionesDeMenu();
            ejecutarOpcionDeMenu(opcion,ganador,puntajeganador);
            system("pause");
        }
        while(opcion != 0);


        return 0;
    }
